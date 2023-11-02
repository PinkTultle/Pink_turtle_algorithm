
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    ;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int num, x = 0, y = 0, i = 0, var = 1, count = 0, max, roop, check = 3;
        cin >> num;
        max = num * num;
        roop = num - 1;
        int** array = new int* [num];
        for (int i = 0; i < num; i++) {
            array[i] = new int[num];
        }

        while (var <= max) {
            
            array[x][y] = var++;

            if (count == roop) {
                count = 0;
                i++;
                check--;
                if (check == 0) {
                    roop--;
                    check = 2;
                }
            }

            count++;

            switch (i % 4) {
            case 0:
                y++;
                break;

            case 1:
                x++;
                break;

            case 2:
                y--;
                break;

            case 3:
                x--;
                break;
            }

        }




        cout << "#" << test_case << endl;

        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }


        for (int i = 0; i < num; i++) {
            delete[] array[i];
        }
        delete[] array;

    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

#include<iostream>
 
using namespace std;
 
int sum_cha(int **array, int size, int cha_size, int x, int y);
 
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
 
    cin>>T;
 
    for(test_case = 1; test_case <= T; ++test_case)
    {
        int N, M, max = 0 , var = 0;
         
        cin >> N >> M;
         
        int cha_size = N - M +1;
         
        int **array = new int *[N];
        for(int i = 0; i < N; i++){
            array[i] = new int[N];
        }
         
        for(int i = 0; i< N; i++){
            for(int j = 0; j < N; j++){
                cin >> array[i][j];
            }
        }
         
        for(int i = 0; i < cha_size; i++){
            for(int j = 0; j < cha_size; j++){
                var = sum_cha(array, N, M, i, j);
                max = (var < max)? max : var;
            }
        }
         
 
        cout << "#" << test_case << " " << max << endl;
         
        for(int i = 0; i< N; i++){
            delete [] array[i];
        }
        delete [] array;
             
         
         
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
 
 
 
int sum_cha(int **array, int size, int cha_size, int x, int y){
  
    int sum = 0;
     
    for(int i = 0; i < cha_size; i++){
        for(int j = 0; j < cha_size; j++){
            sum += *(*(array+(x+i)) + (y+j));
        }
    }
    return sum;
}
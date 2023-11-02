
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int sum = 0, var, avg;
        
        for(int i = 0; i < 10; i++){
            cin >> var;
            sum += var;
        }
        
        avg = sum / 10;
        
        if((sum % 10) > 4) avg++;
        
        cout << "#" << test_case << " " << avg << endl;
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
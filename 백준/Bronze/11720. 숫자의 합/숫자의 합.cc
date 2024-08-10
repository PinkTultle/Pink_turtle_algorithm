#include<iostream>

using namespace std;

int main(){

	int loop = 0;
	int result = 0;
	char tmp;

	cin >> loop;

	for(int i = 0; i < loop; i++){
		cin >> tmp;

		result += (int)(tmp - '0');
	}

	cout << result << endl;

	return 0;
}
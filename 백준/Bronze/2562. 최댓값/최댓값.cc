#include<iostream>
using namespace std;

int main(){

	int loop = 9;
	int max = 0;
	int index = 0;
	int tmp = 0;

	for(int i = 0; i < loop; i++){
		cin >> tmp;

		if(max < tmp){
			max = tmp;
			index = i + 1;
		}
	}

	cout << max << endl << index << endl;

	return 0;
}
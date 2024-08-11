#include<iostream>

using namespace std;

int main(){

	int loop = 0;

	cin >> loop;

	for(int i = 0; i < loop; i++){
		for(int j = loop - i; j > 1; j--){
			cout << ' ';
		}
		for(int j = 0; j <= i; j++){
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}
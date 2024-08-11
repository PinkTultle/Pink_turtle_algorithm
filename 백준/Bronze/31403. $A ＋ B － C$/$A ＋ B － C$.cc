#include<iostream>
#include<string>
using namespace std;

int main(){

	int A = 0;
	int B = 0;
	int C = 0;

	cin >> A >> B >> C;

	cout << A + B - C << endl;
	cout << stoi(to_string(A) + to_string(B)) - C << endl;

	return 0;
}
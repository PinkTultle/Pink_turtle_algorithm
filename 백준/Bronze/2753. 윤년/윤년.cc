#include<iostream>
using namespace std;

int main(){
	int year, result;

	cin >> year;

	result = ((year%400))? (((year%100)&&!(year%4))? 1: 0): 1; 
	
	cout << result << endl;

	return 0;
}
#include<iostream>
#include<vector>
using namespace std;

#define ASC_ST 1
#define DESC_ST 8

int sorted_check(vector<int> arr, int flag){

	//mixed flag
	if(flag == -1){
		cout << "mixed" << endl;
		return 0;
	}
	
	for(int i = 1; i < 8; i++){
		if(arr.at(i) == (arr.at(i-1) + 1) || arr.at(i) == (arr.at(i-1) - 1)){
			continue;
		}
		cout << "mixed" << endl;
		return 0;
	}
	
	switch(flag){
		case ASC_ST:
			cout << "ascending" << endl;
			break;

		case DESC_ST:
			cout << "descending" << endl;
			break;
	}

	return 0;
}

int main(){

	vector<int> arr;
	int tmp, num = 0;


	for( ; num < 8; num++)
	{
		cin >> tmp;
		arr.push_back(tmp);
	}

	if(arr.at(0) == ASC_ST){
		sorted_check(arr, ASC_ST);
	} else if(arr.at(0) == DESC_ST){
		sorted_check(arr, DESC_ST);
	} else{
		sorted_check(arr, -1);
	}

	return 0;
}
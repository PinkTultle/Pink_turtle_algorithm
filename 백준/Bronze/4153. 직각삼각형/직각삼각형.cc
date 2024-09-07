#include<iostream>
#include<array>
#include<cmath>
using namespace std;


void long_side_fine(int &long_side, int &side1, int &side2){
	
	//사이드 두개 입력 받아 스왑하는 람다 함수
	//삼항 연산자에서 사용하기 위해 long_side는 반환	
	// auto swap_lambda = [](auto &a, auto &b) {auto tmp = b; b = a; return tmp;};

	auto swap_lambda = [](auto &a, auto &b) {auto tmp = b; b = a; return tmp;};


	if(side1 < side2){
		long_side = (long_side > side2)? long_side : swap_lambda(long_side, side2);
	}	else {
		long_side = (long_side > side1)? long_side : swap_lambda(long_side, side1);
	}
}

int main(){

	array <int, 3> angle_side;
	int check_tmp = 0;

	while(1){
		check_tmp = 0;

		for(int &side : angle_side){
			cin >> side;
			check_tmp += side;
		}

		if(!check_tmp) break;

		long_side_fine(angle_side.at(0), angle_side.at(1), angle_side.at(2));

		
		for(int &side : angle_side){
			side = pow(side, 2);
		}

		if(angle_side.at(0) == angle_side.at(1) + angle_side.at(2)){
			cout << "right" << endl;
		} else {
			cout << "wrong" << endl;
		}
	}

	return 0;
}
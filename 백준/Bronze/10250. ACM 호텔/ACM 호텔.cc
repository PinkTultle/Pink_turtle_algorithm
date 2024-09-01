//
//	백준  문제 10250
//	문제 명 : ACM 호텔
//

#include<iostream>
using namespace std;

int main(){
  int test_case;
	int floor, room, guest_num;
	int YY, XX;

	cin >> test_case;

	//재미있게 생겨서 가져왔습니다.
	while(test_case --> 0){
		cin >> floor >> room >> guest_num;

		//floor 1에 대한 예외처리 필요 졸려서 일단 스탑...
		XX = (guest_num % floor) ? guest_num / floor + 1 : guest_num / floor;
		YY = (guest_num % floor) ? guest_num % floor : floor;

		cout << to_string(YY);
		cout.width(2);
		cout.fill('0');
		cout << to_string(XX) << endl;
	}

	return 0;
}
//
//	CLASS : 2
//	백준  문제 2231
//	문제 명 : 분해합
//

#include <iostream>

int main(){
	int input = 0;
	int compare_num = 0;
	int tmp = 0;

	std::cin >> input;

	for(tmp = input; tmp > 10; ){
		tmp /= 10;
		compare_num += 9;
	}

	compare_num += tmp;
	compare_num = input - compare_num;

	for(tmp = compare_num; compare_num < input; tmp = compare_num){
		int creat_num = compare_num;
		
		while (tmp > 0) {
			creat_num += (tmp % 10);
			tmp /= 10;
		}
		
		if (creat_num == input) {
			std::cout << compare_num << std::endl;
			return 0;
		}
		else {
			compare_num++;
		}
	}

	std::cout << '0' << std::endl;
	return 0;
}
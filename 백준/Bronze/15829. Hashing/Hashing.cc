//
//	CLASS : 2
//	백준  문제 15829
//	문제 명 : Hashing
//

#include <iostream>
#include <string>
#include <math.h>

// pow 함수 오버로딩
unsigned long long pow(int base, int n){
	if(!n) return 1; 
	unsigned long long result = base;
	while(--n) result *= base % 1234567891;
	return result;
}

unsigned long long hashing_func(std::string input_str, int str_len){
	constexpr int hash = 31;
	static int index = 0;
	unsigned long long result = 0;

	if(!(index <= str_len)){
		return 0;
	}

	result = pow(hash, index);
	result *= (input_str.at(index++) - 'a' + 1);
	
	return result + hashing_func(input_str, str_len);
}

int main(){
	std::string input_str;
	int str_len;

	std::cin >> str_len;
	std::cin >> input_str;

	std::cout << hashing_func(input_str, str_len - 1) << std::endl;

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Digit(int input) {
	int count = 0;

	while (input >= 10) {
		input /= 10;
		count++;
	}
	return count + 1;
}

int main() {

	int input;

	while(1){

		scanf("%d", &input);

		if (input == 0) return 0;

		int digits, Criteria, status = 1;

		digits = Digit(input);
		
		switch (digits) {

		case 1 :
			puts("yes");
			continue;

		case 3:
			Criteria = 1;
			break;

		case 5:
			Criteria = 2;
			break;

		default :
			Criteria = digits / 2;
			break;
		}

		int* temp = (int*)calloc(Criteria, sizeof(int));
		status = 1;

		for (int i = 0; i < Criteria; i++) {
			*(temp + i) = input % 10;
			input /= 10;
		}

		if (digits == 3 || digits == 5) {
			input /= 10;
		}

		for (int i = --Criteria; i >= 0; i--) {
			if (*(temp + i) != input % 10) 
				status = 0;
			input /= 10;
		}

		if (status) {
			puts("yes");
		}
		else {
			puts("no");
		}
	}

	return 0;
}
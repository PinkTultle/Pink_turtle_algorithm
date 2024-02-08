#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int input;

	scanf("%d", &input);

	printf("%d\n", Honeycomb_Navigation(input));

	return 0;
}

int Honeycomb_Navigation(int input) {
	int count = 1, Boundary = 1;

	while (Boundary < input) {

		Boundary = Boundary + (count * 6);
		count++;
	}

	return count;
}

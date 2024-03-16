#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

unsigned long height = 0;

int main() {

	int up, down, gol, result = 0;
	scanf("%d %d %d", &up, &down, &gol);

	int cha = up - down;
	int low = gol - up;

	result = (gol - down - 1) / (up - down) + 1;

	printf("%d\n", result);
	return 0;
}
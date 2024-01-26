#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int Point, Sum = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &Point);

		Sum += (Point*Point);
	}

	printf("%d\n", Sum % 10);

	return 0;
}
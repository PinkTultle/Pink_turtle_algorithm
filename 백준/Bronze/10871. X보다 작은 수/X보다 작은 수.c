#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int N, X, num;

	scanf("%d %d ", &N, &X);

	while (N >	0) {

		scanf("%d", &num);
		if (num < X) printf("%d ", num);

		N--;
	}

	return 0;
}
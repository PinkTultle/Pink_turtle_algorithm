#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int H, W, N, T;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {

		scanf("%d %d %d", &H, &W, &N);

		W = 0;
		W = (N % H) ? N % H * 100 : H * 100;
		W += (N % H) ? N / H + 1 : N / H;

		printf("%d\n", W);
	}

	return 0;
}
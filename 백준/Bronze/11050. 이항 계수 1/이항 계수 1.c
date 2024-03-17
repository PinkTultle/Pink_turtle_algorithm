#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {

	int N, K;
	scanf("%d %d", &N, &K);

	int** dp = (int**)malloc(sizeof(int*) * (N+1));

	for (int i = 0; i <= N; i++) {
		*(dp+i) = (int*)calloc((i + 1), sizeof(int));

		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) dp[i][j] = 1;
			else {
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			}
		}
	}

	printf("%d\n", dp[N][K]);

	for (int i = 0; i < N; i++) {
		free(dp[i]);
	}
	free(dp);
	return 0;
}
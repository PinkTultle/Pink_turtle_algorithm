#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main() {

	int N, M, result = 0, max;
	int first, second, third;

	scanf("%d %d", &N, &M);

	int* array = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", array + i);
	}

	for (first = 0; first < N-2; first++) {
		for (second = first + 1; second < N-1; second++) {
			for (third = second + 1; third < N; third++) {
				max = array[first] + array[second] + array[third];

				if (max <= M && max > result) result = max;

			}
		}
	}

	free(array);
	printf("%d\n", result);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main() {
	int N, input;

	scanf("%d", &N);

	int* array = (int*)calloc(10000, sizeof(int));

	while (N--) {
		scanf("%d", &input);
//		*(array + (input - 1)) = *(array + (input - 1)) + 1;
		array[input - 1]++;
	}

	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < array[i]; j++) {
			printf("%d\n", i + 1);
		}
	}

}
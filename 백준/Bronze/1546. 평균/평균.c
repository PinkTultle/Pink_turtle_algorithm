#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {

	int input, max = 0, max_point = 0;
	double avg = 0;
	
	scanf("%d", &input);

	int* temp = (int*)calloc(input, sizeof(int));

	for (int i = 0; i < input; i++) {
		scanf("%d", (temp + i));
		if (max < *(temp + i)) {
			max = *(temp + i);
			max_point = i;
		}
	}

	for (int i = 0; i < input; i++) {
		avg += (((double)*(temp + i)) / max * 100.0);
	}

	printf("%lf\n", avg / input);
	return 0;
}
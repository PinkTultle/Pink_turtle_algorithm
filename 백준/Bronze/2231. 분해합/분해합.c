#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int N, range_num = 0, test;

	scanf("%d", &N);

	test = N;

	while (test > 10) {
		test /= 10;
		range_num += 9;
	}

	range_num += test;
	range_num = N - range_num;

	while (range_num < N) {
		int creat_num = 0;
		
		test = range_num;
		creat_num += range_num;
		
		while (test > 10) {
			creat_num += (test % 10);
			test /= 10;
		}
		creat_num += test;
		
		if (creat_num == N) {
			printf("%d\n", range_num);
			return 0;
		}
		else {
			range_num++;
		}
	}

	printf("0\n");

	return 0;
}
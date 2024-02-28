#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int  gcd(int A, int B) {
	int gcd;

	while (B != 0) {
		gcd = A % B;
		A = B;
		B = gcd;
	}

	return A;
}

int lcm(int A, int B) {
	return (A * B) / gcd(A, B);
}

int main() {

	int A, B;

	scanf("%d %d", &A, &B);

	printf("%d\n%d\n", gcd(A, B), lcm(A, B));

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

unsigned long long hash_var(int count) {
	unsigned long long R = 31;
	if (count == 0) return 1;
	return (R * hash_var(count - 1)) % 1234567891;
}

int main() {

	int len;
	char* str;
	unsigned long long point, result = 0;

	scanf("%d", &len);

	str = (char*)calloc(len + 1, sizeof(char));
	scanf("%s", str);

	for (int i = 0; i < len; i++) {
		
		point = *(str + i);
		point -= 96;
		
		result += point * hash_var(i);
		result %= 1234567891;
	}

	printf("%d\n", result%1234567891);
	return 0;
}

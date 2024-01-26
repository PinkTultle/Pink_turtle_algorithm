#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char str[1001];
	int index;
	
	scanf("%s", &str);
	scanf("%d", &index);

	printf("%c\n", str[index-1]);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<ctype.h>

int main() {
	int Eng[26] = { 0, };
	char input;
	int max, num = 0;

	while (1) {

		input = getchar();
		if (input == '\n') break;

		input = tolower(input);
		Eng[((int)input % 97)]++;
	}
	max = 0;

	for (int i = 1; i < 26; i++) {
		if (Eng[i] > Eng[max]) {
			max = i;
			num = 0;
		}
		else if (Eng[i] == Eng[max]) num++;
	}

	if (num > 0) printf("?\n");
	else printf("%c\n", max + 65);

	return 0;
}

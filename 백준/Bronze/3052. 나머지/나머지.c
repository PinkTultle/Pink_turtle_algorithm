#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Cri 42

int main() {

	int rest[11] = { -1, };
	int input, j, Rest, result = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);

		Rest = input % Cri;
		j = 0;

		while (rest[j] != Rest) {
			if (rest[j] == -1) {
				rest[j] = Rest;
				rest[j + 1] = -1;
				result = j + 1;
				break;
			}
			j++;
		}
	}

	printf("%d\n", result);

	return 0;
}
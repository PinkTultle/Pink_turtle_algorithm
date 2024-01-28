#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int Test, result, Point;
	char input;

	scanf("%d ", &Test);
	for (int i = 0; i < Test; i++) {
		result = 0;
		Point = 0;

		while (1) {

			input = getchar();
			if (input == '\n') break;

			if (input == 'O') {
				result += ++Point;
			}
			else {
				Point = 0;
			}
		}
		printf("%d\n", result);
	}

	return 0;
}
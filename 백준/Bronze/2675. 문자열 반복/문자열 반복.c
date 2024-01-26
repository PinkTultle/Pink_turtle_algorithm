#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	int Test_case, Repetitions, Point = 0;
	char str[21];

	scanf("%d", &Test_case);

	for (int i = 0; i < Test_case; i++) {
		
		Point = 0;
		scanf("%d %s", &Repetitions, &str);

		while(str[Point] != NULL) {
			for (int j = 0; j < Repetitions; j++)
				printf("%c", str[Point]);

			Point++;
		}

		puts("");
	}

	return 0;
}
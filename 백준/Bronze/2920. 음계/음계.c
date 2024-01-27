#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int first, second, ch;	
	char asc[12] = "ascending", des[12] = "descending";
	char* comend;
	scanf("%d ", &first);

	if (first == 1 || first == 8) {

		comend = (first == 1) ? asc : des;

		for (int i = 0; i < 7; i++) {
			scanf("%d", &second);

			ch = second - first;

			if (ch == 1 || ch == -1) {
				first = second;

				if (second == 1 || second == 8)
					printf("%s\n", comend);
			}
			else {
				printf("mixed\n");
				break;
			}
		}
	}
	else	printf("mixed\n");


	return 0;
}
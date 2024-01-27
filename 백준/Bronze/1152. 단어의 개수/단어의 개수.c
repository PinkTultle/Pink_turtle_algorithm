#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char first, second = NULL;
	int count = 0;

	while (1) {

		first = getchar();

		if (first == ' ') {
			second = getchar();
			
			if (second == '\n')
				break;
			else
				count++;
		}
		else {
			if (second == NULL) 
				count++;
			second = first;
		}

		if (first == '\n')	break;
	}

	printf("%d\n", count);
	return 0;
}
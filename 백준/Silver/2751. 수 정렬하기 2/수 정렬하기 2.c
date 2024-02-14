#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int compare(const void *first, const void* second) {

	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main() {

	int* array = NULL;
	int Size;

	scanf("%d ", &Size);

	array = (int*)malloc(sizeof(int) * Size);

	for (int i = 0; i < Size; i++) {
		scanf("%d", array + i);
	}

	qsort(array, Size, sizeof(int), compare);

	for (int i = 0; i < Size; i++) {
		printf("%d \n", *(array + i));
	}

	free(array);
	return 0;
}

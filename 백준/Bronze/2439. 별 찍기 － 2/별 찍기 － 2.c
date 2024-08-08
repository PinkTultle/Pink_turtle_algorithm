int main() {
	int a;

	scanf("%d", &a);

	for (int b = 1; b <= a; b++) {
		for (int d = 1; d <= a - b; d++) printf(" ");

		for (int v = 1; v <= b; v++) printf("*");
		printf("\n");
	}
	return 0;
}


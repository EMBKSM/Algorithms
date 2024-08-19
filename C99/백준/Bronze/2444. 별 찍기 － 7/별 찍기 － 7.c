int main() {
	int n, j, i;
	scanf("%d", &n);
	n--;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i; j++)
			printf(" ");
		for (j = 0; j < (i*2) + 1; j++)
			printf("*");
		printf("\n");

	}
	for (; i >= 0; i--) {
		for (j = 0; j < n - i; j++)
			printf(" ");
		for (j = 0; j < (i * 2) + 1; j++)
			printf("*");
		printf("\n");
	}
}
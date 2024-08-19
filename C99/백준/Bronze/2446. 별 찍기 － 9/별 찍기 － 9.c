#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = n; 0 < i; i--) {
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < (n - 1 - (n-i)) * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--) {
			printf(" ");
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	
	if (a % 4 == 0) {
		if (a % 400 == 0) {
			printf("1");
		}
		else if (a % 100 == 0) {
			printf("0");
		}
		else {
			printf("1");
		}
	}
	else {
		printf("0");
	}
}
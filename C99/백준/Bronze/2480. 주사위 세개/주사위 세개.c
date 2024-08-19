#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b== c)
		printf("%d", 10000 + (1000 * a));
	else if (a == b)
		printf("%d", 1000 + (100 * a));
	else if (a == c)
		printf("%d", 1000 + (100 * a));
	else if (b == c)
		printf("%d", 1000 + (100 * b));
	else {
		if (a > b)
			if (a > c)
				printf("%d", a * 100);
		if (b > a)
			if (b > c)
				printf("%d", b * 100);
		if (c > a)
			if (b < c)
				printf("%d", c * 100);
	}
}
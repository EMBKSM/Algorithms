#include <stdio.h>

int main() {
	long long a, b, temp;
	scanf("%lld %lld", &a, &b);
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	printf("%lld", a - b);
}
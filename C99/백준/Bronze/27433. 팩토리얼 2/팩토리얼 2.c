#include <stdio.h>

int main() {
	long long n, result = 1;
	scanf("%lld", &n);
	for (; 0 < n; n--)
		result *= n;
	printf("%lld", result);
}
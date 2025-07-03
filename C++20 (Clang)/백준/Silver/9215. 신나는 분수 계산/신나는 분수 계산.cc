
#include <stdio.h>
#include <string.h>

long long int gcd(long long int a, long long int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	long long int w_total, d_total, r, up = 0, w, d, up_total;
	int n, count = 0;
	char input[5000];
	while (1) {
		scanf("%d", &n);
		if (n == 0) break;

		w_total = 0;
		d_total = 1;
		up_total = 0;

		for (int i = 0; i < n; i++) {
			up = 0, w = 0, d = 1;
			scanf("%s", input);
			if (strchr(input, ',') != NULL) sscanf(input, "%lld,%lld/%lld", &up, &w, &d);
			else if (strchr(input, '/') != NULL) sscanf(input, "%lld/%lld", &w, &d);
			else sscanf(input, "%lld", &up);

			up_total += up;

			w_total = w_total * d + w * d_total;
			d_total *= d;

			r = gcd(w_total > 0 ? w_total : -w_total, d_total);
			w_total /= r;
			d_total /= r;
		}
		if (w_total >= d_total) {
			up_total += w_total / d_total;
			w_total = w_total % d_total;
		}
		if (w_total != 0) {
			int r = gcd(w_total, d_total);
			w_total /= r;
			d_total /= r;
		}
		count++;
		printf("Test %d: ", count);
		if (w_total == 0) printf("%lld\n", up_total);
		else if (up_total != 0) printf("%lld,%lld/%lld\n", up_total, w_total, d_total);
		else printf("%lld/%lld\n", w_total, d_total);
	}
}
#include <stdio.h>
#include <math.h>

int t, l, r;

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &l, &r);
			if (r >= 4) {
				printf("%d\n", r);
				continue;
			}
		int num = 0;
		for (int i = r; i >= l; i--) {
			num += (pow(2, i) * pow(10, r - i));
		}
		int cnt = 0;
		while (num % 2 == 0) {
			num /= 2;
			cnt++;
		}
		printf("%d\n", cnt);
	}
}
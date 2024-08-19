#include <stdio.h>

int main() {
	int n, max = 0;
	scanf("%d", &n);
	double num_list[n + 1], sum = 0.0;
	for (int i = 0; i < n; i++) {
		scanf("%lf", &num_list[i]);
		if (num_list[i] > max)
			max = num_list[i];
	}
	for (int i = 0; i < n; i++) {
		num_list[i] /= max;
		sum += num_list[i]*100;
	}
	printf("%lf", sum / n);


}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int* dp = new int[n+1];
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1];
		if (i % 3 == 0) {
			dp[i] = min(dp[i / 3], dp[i]);
		}
		if (i % 2 == 0) {
			dp[i] = min(dp[i / 2], dp[i]);
		}
		dp[i]++;

	}
	cout << dp[n];
}
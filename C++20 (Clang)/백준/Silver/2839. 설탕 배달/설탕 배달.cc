#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> dp(n + 1, -1);

	dp[3] = 1;
	dp[5] = 1;

	for (int i = 6; i <= n; i++) {
		if (dp[i - 3] < 0 && dp[i - 5] < 0) {
			dp[i] =  - 1;
		}
		else if (dp[i - 3] > 0 && dp[i - 5] > 0) {
			dp[i] = 1 + min(dp[i-3],dp[i-5]);
		}
		else {
			dp[i] = 1 + max(dp[i - 3], dp[i - 5]);
		}
	}
	cout << dp[n];
}
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define MOD 10007

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> stair(n+1);
	for (int i = 1; i <= n; i++) {
		cin >> stair[i];
	}

	vector<int> dp(n + 1);
	dp[1] = stair[1];
	dp[2] = max(stair[1], stair[1] + stair[2]);
	dp[3] = max(stair[1] + stair[3], stair[2] + stair[3]);
	for (int i = 4; i <= n;i++) {
		dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);
	}
	cout << dp[n];
}
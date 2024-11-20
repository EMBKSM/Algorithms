#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int** dp = new int* [n+1];
	int** RGB = new int* [n + 1];
	for (int i = 0; i <= n; i++) {
		dp[i] = new int[3];
		dp[i][0] = 0;
		dp[i][1] = 0;
		dp[i][2] = 0;
		RGB[i] = new int[3];
		RGB[i][0] = 0;
		RGB[i][1] = 0;
		RGB[i][2] = 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> RGB[i][0] >> RGB[i][1] >> RGB[i][2];
		dp[i][0] = RGB[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = RGB[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = RGB[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
	}
	cout << min(dp[n][0], min(dp[n][1], dp[n][2]));
}
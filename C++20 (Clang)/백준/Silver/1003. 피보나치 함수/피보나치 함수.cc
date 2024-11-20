#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		vector<int> dp_0(m + 2);
		vector<int> dp_1(m + 2);
		dp_0[0] = 1;
		dp_1[0] = 0;
		dp_0[1] = 0;
		dp_1[1] = 1;
		for (int j = 2; j <= m; j++) {
			dp_0[j] = dp_0[j - 1] + dp_0[j - 2];
			dp_1[j] = dp_1[j - 1] + dp_1[j - 2];
		}
		cout << dp_0[m] << " " << dp_1[m] << "\n";
	}
}
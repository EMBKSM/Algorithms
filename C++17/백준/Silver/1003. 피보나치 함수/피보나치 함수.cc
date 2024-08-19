#include <iostream>

using namespace std;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int cnt_0[41] = { 1, 0 };
		int cnt_1[41] = { 0, 1 };
		cin >> m;
		int lic0 = 1;
		int lic1 = 1;
		if (m > 1) {
			for (int j = 0; j < m - 1; j++) {
				cnt_0[++lic0] = cnt_1[lic1];
				cnt_1[lic1+1] = cnt_0[lic0-1] + cnt_1[lic1];
				lic1++;
			}
		}
		cout << cnt_0[m] << ' ' << cnt_1[m] << '\n';
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n,sum = 0;
	cin >> n;

	vector<int> time(n);

	for (int i = 0; i < n; i++) {
		cin >> time.at(i);
	}
	sort(time.begin(), time.end());
	for (int i = 1; i < n+1; i++) {
		for (int j = 0; j < i; j++) {
			sum += time.at(j);
		}
	}
	cout << sum;
}
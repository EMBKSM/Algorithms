#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<int> S;
	vector<int> overwrite = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	for (int i = 0; i < n; i++) {
		string keyword;
		int in_num, cmp=0;
		
		cin >> keyword;

		cmp += static_cast<int>(keyword[0]) + static_cast<int>(keyword[1]);
		if (cmp != 205&&cmp != 210) {
			cin >> in_num;
		}
		auto b = find(S.begin(), S.end(), in_num);
		int del = b - S.begin();

		switch (cmp) {
		case 197:
			if (find(S.begin(), S.end(), in_num) == S.end()) {
				S.push_back(in_num);
			}
			break;
		case 203:
			cout << ((find(S.begin(), S.end(), in_num) == S.end()) ? 0 : 1) << "\n";
			break;
		case 205:
			S = overwrite;
			break;
		case 210:
			S.clear();
			break;
		case 215:
			if (b != S.end()) {
				S.erase(S.begin() + del);
			}
			break;
		case 227:
			if (find(S.begin(), S.end(), in_num) == S.end()) {
				S.push_back(in_num);
			}
			else {
				S.erase(S.begin() + del);
			}
		}

	}
}
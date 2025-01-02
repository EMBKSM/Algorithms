#include <bits/stdc++.h>

using namespace std;

vector<int> najeng(9);
vector<int> v;

void cobi(int start, vector<int> &temp) {
	if (temp.size() == 7) {
		int sum = accumulate(temp.begin(), temp.end(), 0);
		if (sum == 100) {
			for (auto a : temp) {
				cout << a << "\n";
			}
			exit(0);
		}
	}
	for (int i = start + 1; i < 9; i++) {
		temp.push_back(najeng[i]);
		cobi(i, temp);
		temp.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for (int i = 0; i < 9; i++) {
		cin >> najeng[i];
	}

	sort(najeng.begin(), najeng.end());
	cobi(-1, v);
}
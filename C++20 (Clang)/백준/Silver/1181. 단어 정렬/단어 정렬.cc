#include <bits/stdc++.h>

using namespace std;

int cmp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	string* word = new string[n];

	for (int i = 0; i < n; i++) {
		cin >> word[i];
	}

	sort(word, word + n, cmp);

	for (int i = 0; i < n; i++) {
		if (word[i] == word[i - 1]) {
			continue;
		}
		cout << word[i] << "\n";
	}
}
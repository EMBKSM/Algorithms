#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	stack<int> high;
	stack<int> idx;
	
	int n,temp;
	cin >> n;

	cin >> temp;
	high.push(temp);
	idx.push(1);
	cout << 0 << ' ';

	for (int i = 2; i < n+1; i++) {
		cin >> temp;
		if (high.top() > temp) {
			cout << idx.top() << ' ';
			high.push(temp);
			idx.push(i);
		}
		else {
			while (high.size() > 0 && high.top()<temp) {
				high.pop();
				idx.pop();
			}
			if (high.size() == 0) {
				cout << 0 << ' ';
				high.push(temp);
				idx.push(i);
			}
			else {
				cout << idx.top() << ' ';
				high.push(temp);
				idx.push(i);
			}
		}
	}
}
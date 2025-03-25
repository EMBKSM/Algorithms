#include <bits/stdc++.h>

using namespace std;

struct Compare {
	bool operator()(const int a, const int b) {
		int a_, b_;
		a_ = (a < 0) ? -a : a;
		b_ = (b < 0) ? -b : b;
		return (a_ == b_) ? a > b : a_ > b_;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	priority_queue<int, vector<int>, Compare> heap;
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp != 0) {
			heap.push(temp);
		}
		else {
			if (!heap.empty()) {
				cout << heap.top() << "\n";
				heap.pop();
			}
			else {
				cout << 0 << "\n";
			}
		}
	}
}
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	priority_queue<int, vector<int>, greater<int>> min_heap;
	priority_queue<int, vector<int>> max_heap;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (max_heap.size() <= min_heap.size()) {
			max_heap.push(temp);
		}
		else {
			min_heap.push(temp);
		}

		while ((min_heap.size()) && (max_heap.top() > min_heap.top())) {
			int mint = min_heap.top();
			int maxim = max_heap.top();

			min_heap.pop();
			max_heap.pop();

			max_heap.push(mint);
			min_heap.push(maxim);
		}
		cout << max_heap.top() << "\n";
	}
}
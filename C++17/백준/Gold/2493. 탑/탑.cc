#include <iostream>
#include <stack>
#include <utility>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n, top_h;
	cin >> n;
	stack<pair<int, int>> TOP;
	for (int i = 0; i < n; i++) {
		cin >> top_h;
		while (!TOP.empty()) {
			if (TOP.top().second > top_h) {
				cout << TOP.top().first << ' ';
				break;
			}
			TOP.pop();
		}
		if (TOP.empty()) {
			cout << 0 << " ";
		}
		TOP.push(make_pair(i+1,top_h));
	}
}
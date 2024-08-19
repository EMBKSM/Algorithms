#include <iostream>
using namespace std;
int main() {
	int n, idx = 0, m;
	cin >> n;
	int* stack = new int[n];
	for (int i = 0; i < n; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			cin >> m;
			stack[++idx] = m;
		}
		else if (cmd == "pop") {
			if (idx == 0) {
				cout << -1 << endl;
			}
			else {
				cout << stack[idx] << endl;
				stack[idx] = 0;
				idx--;
			}
		}
		else if (cmd == "size") {
			cout << idx << endl;
		}
		else if (cmd == "empty") {
			if (idx == 0)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else
		{
			if (idx == 0) {
				cout << -1 << endl;
			}
			else
			{
				cout << stack[idx] << endl;
			}
		}
	}
}
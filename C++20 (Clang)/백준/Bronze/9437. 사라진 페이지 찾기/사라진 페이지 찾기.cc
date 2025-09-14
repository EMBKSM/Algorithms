#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, p;
	while (true) {
		cin >> n;
		if (n == 0)return 0;
		
		cin >> p;

		vector<int> nums(4);
		int partner = n - p + 1;

		nums[0] = p;
		nums[1] = (p % 2 == 1) ? p + 1 : p-1;
		nums[2] = partner;
		nums[3] = (p % 2 == 1) ? n - p : n - p + 2;

		sort(nums.begin(), nums.end());
		
		bool first = true;

		for (int page : nums) {
			if (page != p) {
				if (!first) {
					cout << " ";
				}
				cout << page;
				first = false;
			}
		}
		cout << "\n";
	}
}
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int one, ten, num, last_num;
	cin >> num;
	last_num = num;
	int cnt = 0;
	do{
		one = last_num % 10;
		ten = last_num / 10;

		last_num = one * 10 + (ten + one) % 10;
		cnt++;
	} while (!(num == last_num));

	cout << cnt;
}
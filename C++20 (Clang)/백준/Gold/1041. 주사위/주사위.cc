//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n,temp_cnt, cnt = 0;
//	cin >> n;
//
//	vector<int> building(n);
//	for (int i = 0; i < n; i++) {
//		cin >> building.at(i);
//	}
//	for (int i = 0; i < n; i++) {
//		for(int j = i; j <)
//	}
//}

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<long long> dice;
	for (int i = 0; i < 6; i++) {
		long long temp;
		cin >> temp;
		dice.push_back(temp);
	}
	
	long long answer = 0;
	vector<long long> dice_cnt(4); // 가시성을 올리기 위한 1추가
	if (n > 1) {
		long long temp[3];
		temp[0] = min(dice[0], dice[5]);
		temp[1] = min(dice[1], dice[4]);
		temp[2] = min(dice[2], dice[3]);
		sort(temp, temp + 3);

		long long one, two, three;
		one = temp[0];
		two = one + temp[1];
		three = two + temp[2];
		
		dice_cnt.at(1) = (one * 4 * (n - 2) * (n - 1)) + (one * (n - 2) * (n - 2));
		dice_cnt.at(2) = (two * 4 * (n - 1)) + (two * 4 * (n - 2));
		dice_cnt.at(3) = three * 4;
		answer = dice_cnt.at(1) + dice_cnt.at(2) +  dice_cnt.at(3);

		cout << answer;
	}
	else if (n == 1) {
		sort(dice.begin(), dice.end(), less<>());
		for (int i = 0; i < 5; i++) {
			answer += dice.at(i);
		}
		cout << answer;
	}
}
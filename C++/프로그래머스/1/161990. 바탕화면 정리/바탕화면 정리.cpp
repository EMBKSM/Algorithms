#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
	int min_x = 51, min_y = 51;
	int max_x = -1, max_y = -1;
	for (int i = 0; i < wallpaper.size(); i++) {
		for (int j = 0; j < wallpaper[i].size(); j++) {
			if (wallpaper[i][j] == '#') {
				if (min_y > i) {
					min_y = i;
				}
				if (min_x > j) {
					min_x = j;
				}
				if (max_x < j) {
					max_x = j;
				}
				if (max_y < i) {
					max_y = i;
				}

			}
		}
	}
	vector<int> answer = { min_y, min_x, max_y + 1,max_x + 1 };
	return answer;
}
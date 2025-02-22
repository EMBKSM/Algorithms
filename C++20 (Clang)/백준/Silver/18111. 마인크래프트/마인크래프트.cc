#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> land(501, vector<int>(501, 0));

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    double b;
    cin >> n >> m >> b;

    int land_min = 267, land_max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> land[i][j];

            if (land[i][j] > land_max) {
                land_max = land[i][j];
            }
            if (land[i][j] < land_min) {
                land_min = land[i][j];
            }
        }
    }

    int result_height = 267, min_time = INT_MAX;

    for (int target_height = land_min; target_height <= land_max; target_height++) {
        int remove = 0, build = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int height_diff = land[i][j] - target_height;

                if (height_diff > 0) {
                    remove += height_diff;
                }
                if (height_diff < 0) {
                    build -= height_diff;
                }
            }
        }

        if (remove + b >= build) {
            int time = remove * 2 + build;

            if (time <= min_time) {
                min_time = time;
                result_height = target_height;
            }
        }
    }

    cout << min_time << " " << result_height << "\n";
}

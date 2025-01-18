#include <bits/stdc++.h>

using namespace std;

void stars(int size, vector<vector<char>>& star, int m, int n);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<vector<char>> star(n, vector<char>(n, ' '));

    stars(n, star, n - 1, n - 1);


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << star[i][j];
        }
        cout << "\n";
    }

    return 0;
}

void stars(int size, std::vector<vector<char>>& star, int m, int n) {
    if (size == 1) {
        star[m][n] = '*';
        return;
    }

    int sub_size = size / 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                continue;
            }
            stars(sub_size, star, m - sub_size * i, n - sub_size * j);
        }
    }
}
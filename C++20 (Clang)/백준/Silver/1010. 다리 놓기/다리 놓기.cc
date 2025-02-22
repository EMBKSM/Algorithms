#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> memo(30, vector<int>(30, 0));

int combination(int n, int r) {
    if (memo[n][r]) {
        return memo[n][r];
    }
    memo[n][r] = combination(n - 1, r - 1) + combination(n - 1, r);
    return memo[n][r];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    for (int i = 0; i < 30; i++) {
        memo[i][0] = memo[i][i] = 1;
    }
    
    int tcase, n, r;
    cin >> tcase;
    
    while (tcase--) {
        cin >> r >> n;
        cout << combination(n, r) << "\n";
    }
}

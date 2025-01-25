#include <bits/stdc++.h>

using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))

vector<int> D;
vector<vector<bool>> O;
vector<int> check;
int N;

int construction(int c) {
    if (check[c] != -1) return check[c];
    int time = 0;
    for (int i = 1; i <= N; i++) {
        if (O[i][c]) {
            time = max(time, construction(i));
        }
    }
    return check[c] = time + D[c];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for(int i = 0; i < T;i++) {
        int K, W;
        cin >> N >> K;

        D.assign(N + 1, 0);
        O.assign(N + 1, vector<bool>(N + 1, false));
        check.assign(N + 1, -1);

        for (int i = 1; i <= N; i++) {
            cin >> D[i];
        }

        for (int i = 0; i < K; i++) {
            int o1, o2;
            cin >> o1 >> o2;
            O[o1][o2] = true;
        }

        cin >> W;
        cout << construction(W) << endl;
    }

    return 0;
}

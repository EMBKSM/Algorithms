#include <iostream>
#include <bits/stdc++.h>
using namespace std;

constexpr long long MOD = 1e9 + 7;

int solution(int n, int count) {
    vector<vector<long long>> FD(n + 1, vector<long long>(count + 1, 0));

    FD[1][1] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= count; j++) {
            FD[i][j] = FD[i - 1][j] * (i - 1) * 2 % MOD + FD[i - 1][j - 1];
            FD[i][j] %= MOD;
        }
    }

    return FD[n][count];
}
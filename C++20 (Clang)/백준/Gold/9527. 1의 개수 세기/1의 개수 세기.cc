#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll ones[55];

ll cnt(ll x) {
    ll sum = x & 1;
    for (int i = 54; i > 0; i--) {
        if (x & (1LL << i)) {
            sum += ones[i - 1] + (x - (1LL << i) + 1);
            x -= (1LL << i);
        }
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;

    ones[0] = 1;

    for (int i = 1; i <= 54; i++) {
        ones[i] = ones[i - 1] * 2 + (1LL << i);
    }

    cout << cnt(m) - cnt(n - 1);
}
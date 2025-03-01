#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int len = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            len++;
        }
        n /= 2;
    }

    cout << len;

}
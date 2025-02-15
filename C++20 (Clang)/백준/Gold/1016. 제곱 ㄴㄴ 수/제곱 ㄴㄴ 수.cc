#include <bits/stdc++.h>

using namespace std;

#define MAX 1000010

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long min_val, max_val;
    cin >> min_val >> max_val;

    vector<bool> is_square_multiple(max_val - min_val + 1, false);
    int count = 0;

    for (long long i = 2; i * i <= max_val; i++) {
        long long square = i * i;
        long long start = min_val / square;
        if (min_val % square) start++;

        for (long long j = start * square; j <= max_val; j += square) {
            is_square_multiple[j - min_val] = true;
        }
    }

    for (bool flagged : is_square_multiple) {
        if (!flagged) count++;
    }

    cout << count << "\n";
}

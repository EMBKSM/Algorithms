#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int arr[8];
    int n, i, j, sum = 0, tmp, half_line = 0;

    cin >> n;

    for (i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    do {
        for (i = 0; i <n; i++) {
            sum = 0;
            for (j = i; j <= n; j++) {
                if (j == n)
                    j = 0;
                sum += arr[j];
                if (sum > 50) {
                    break;
                }
                else if (sum == 50) {
                    tmp++;
                    break;
                }
            }
        }
        half_line = max(half_line, tmp);
        tmp = 0;
    } while (next_permutation(arr, arr + n));

    cout << half_line / 2 << "\n";
}
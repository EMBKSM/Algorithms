#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, s;
    cin >> n;

    vector<int> num_list(n);
    for (int& num : num_list) {
        cin >> num;
    }
    cin >> s;

    int start = 0;
    while (start < n && s > 0) {
        int max_idx = start;

        for (int i = start; i < n && i <= start + s; i++) {
            if (num_list[max_idx] < num_list[i]) {
                max_idx = i;
            }
        }

        for (int i = max_idx; i > start; i--) {
            swap(num_list[i], num_list[i - 1]);
            s--;
        }

        start++;
    }

    for (int num : num_list) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}

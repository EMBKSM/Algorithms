#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, m, k;
    cin >> n;
    vector<long long> num_list(n);

    for (long long i = 0; i < n; i++) {
        cin >> num_list[i];
    }

    cin >> m >> k;
    k--;

    sort(num_list.begin(), num_list.end());

    long long cnt = 1;
    long long total = num_list[k] + m;
    long long left = k, right = k;
    long long crit = 0;

    while (true) {
        crit = total / cnt;
        if (0 < left && crit < num_list[left - 1] + m) {
            left--;
            total += num_list[left] + m;
        }
        else if (right < n - 1 && num_list[right + 1] <= crit) {
            right++;
            total += num_list[right];
        }
        else {
            break;
        }
        cnt++;
    }

    vector<long long> answer;
    for (int i = 0; i < n; i++) {
        if (i < left) {
            answer.push_back(num_list[i] + m);
        }
        else if (i <= right - (total % cnt)) {
            answer.push_back(crit);
        }
        else if (i <= right) {
            answer.push_back(crit + 1);
        }
        else {
            answer.push_back(num_list[i]);
        }
    }

    for (auto a : answer) {
        cout << a << ' ';
    }
}

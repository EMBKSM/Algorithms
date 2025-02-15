#include <bits/stdc++.h>

using namespace std;

#define MAX 1000010

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    long long decreasing_numbers[MAX];
    queue<long long> processing_queue;

    for (int i = 1; i <= 9; i++) {
        processing_queue.push(i);
        decreasing_numbers[i] = i;
    }

    if (0 <= n && n <= 10) {
        cout << n << "\n";
        return 0;
    }

    int idx = 10;
    while (idx <= n && !processing_queue.empty()) {
        long long current_number = processing_queue.front();
        processing_queue.pop();

        int last_digit = current_number % 10;
        for (int i = 0; i < last_digit; i++) {
            processing_queue.push(current_number * 10 + i);
            decreasing_numbers[idx++] = current_number * 10 + i;
        }
    }

    if (idx >= n && decreasing_numbers[n] != 0) {
        cout << decreasing_numbers[n] << "\n";
    }
    else {
        cout << -1 << "\n";
    }
}
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, cnt = 0;
    cin >> n;
    int size_list[6];
    for (int i = 0; i < 6; i++) {
        cin >> size_list[i];
    }
    int T, P;
    cin >> T >> P;
    for (int i = 0; i < 6; i++) {
        if (size_list[i] % T == 0) {
            cnt += size_list[i] / T;
        }
        else {
            cnt += (size_list[i] / T) + 1;
        }
    }
    cout << cnt << "\n";
    cout << n / P << " " << n % P;
}
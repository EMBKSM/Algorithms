#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
            cin >> a >> b >> c;
        if ((a <= b && b <= c && a != -1 ) || (a <= b && c == -1 && a!= -1) || (b == c && c == -1 && a != -1)) {
            cnt++;
        }

    }
    cout << cnt;
}
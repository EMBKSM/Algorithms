#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, int A, int C, int B){    
    if (n == 1) {
        cout << A << " "<< C << "\n";
        return;
    }
    hanoi(n - 1, A, B, C);
    cout << A << " "<< C << "\n";
    hanoi(n - 1, B, C, A);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    string m = to_string(pow(2, n));
    int x = m.find('.');
    m = m.substr(0, x);
    m[m.length() - 1] -= 1;

    cout << m << "\n";
    if (n <= 20) {
        hanoi(n, 1, 3, 2);
    }
}
#include <bits/stdc++.h>


using namespace std;

void hanoi(int n, int A, int C, int B)
{
    if (n == 1) {
        printf("%d %d\n", A, C);
        return;
    }
    hanoi(n - 1, A, B, C);
    printf("%d %d\n", A, C);
    hanoi(n - 1, B, C, A);
}

int main() {
    int n;
    cin >> n;
    string m = to_string(pow(2, n));

    int x = m.find('.');				
    m = m.substr(0, x);				
    m[m.length() - 1] -= 1;
    
    cout << m << endl;
    if (n <= 20) {
        hanoi(n, 1, 3, 2);
    }
}
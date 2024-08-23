#include <iostream>
#include <cmath>
#include <array>
#include <algorithm>

using namespace std;

int number = 1000;
int primeNum[1001];

void primeNumberSieve(){
    for (int i = 0; i <= number; i++){
        primeNum[i] = i;
    }
    primeNum[1] = 0;
    for (int i = 2; i <= sqrt(number); i++){
        if (primeNum[i] == 0)
            continue;
        for (int j = i * i; j <= number; j += i)
            primeNum[j] = 0;
    }
}

int main() {
    primeNumberSieve();
    int n, cnt = 0, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (any_of(begin(primeNum), end(primeNum), [&](int j) { return j == m; })) {
            cnt++;
        }
    }
    cout << cnt;
}
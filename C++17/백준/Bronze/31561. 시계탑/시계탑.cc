#include <iostream>

using namespace std;

int main() {
    double n,m;
    cin >> n;
    if (n > 30) {
        m = 15+ ((n-30) / 2) * 3;
        printf("%.1lf", m);
    }
    else {
        n /= 2;
        printf("%.1lf", n);
    }

}
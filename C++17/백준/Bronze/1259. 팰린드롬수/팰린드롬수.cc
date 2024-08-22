#include <iostream>
#include <string>

int y_n = 0;

using namespace std;
int main() {
    int n;
    cin >> n;
    while (n != 0) {
        string m = to_string(n);
        for (int i = 0, j = m.size()-1; i < m.size() / 2; i++, j--) {
            if (m[i] != m[j]) {
                cout << "no" << endl;
                y_n = 1;
                break;
            }
        }
        if (y_n == 0) {
            cout << "yes" << endl;
        }
        y_n = 0;
        cin >> n;
    }
}
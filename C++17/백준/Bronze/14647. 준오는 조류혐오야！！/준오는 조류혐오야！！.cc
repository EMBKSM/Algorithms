#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k, Big_col, Big_row;

    cin >> n >> m;
    int row_n[n] = { 0, }, col_n[m] = { 0, }, nine_num = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> k;
            while (k / 10) {
                if (k % 10 == 9) {
                    nine_num += 1;
                    col_n[j]++;
                    row_n[i]++;
                }
                k /= 10;
            }
            if (k == 9) {
                nine_num += 1;
                col_n[j]++;
                row_n[i]++;
            }
        }
    }
    Big_col = *max_element(col_n, col_n + m);
    Big_row = *max_element(row_n, row_n + n);
    if (Big_col > Big_row) {
        nine_num -= Big_col;
    }
    else {
        nine_num -= Big_row;
    }
    cout << nine_num;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int start_row, start_col, end_row, end_col;
    cin >> start_row >> start_col >> end_row >> end_col;

    int spiral_matrix[50][5] = { 0 };
    int max_distance = max({ abs(start_row), abs(start_col), abs(end_row), abs(end_col) });
    int value = 1;

    if (start_row <= 0 && start_col <= 0 && end_row >= 0 && end_col >= 0) {
        spiral_matrix[-start_row][-start_col] = value;
    }

    int layer_count = 0;
    int y = 0, x = 0;

    for (int i = 1; i <= max_distance + 1; i++) {
        for (int j = 0; j < 4; j++) {
            int steps = (j < 2) ? (1 + layer_count * 2) : (2 + layer_count * 2);
            for (int k = 0; k < steps; k++) {
                value++;
                if (j == 0) {
                    x++;
                }
                else if (j == 1) {
                    y--;
                }
                else if (j == 2) {
                    x--;
                }
                else {
                    y++;
                }

                if (y >= start_row && x >= start_col && y <= end_row && x <= end_col) {
                    spiral_matrix[y - start_row][x - start_col] = value;
                }
            }
        }

        layer_count++;
    }

    int height = abs(end_row - start_row);
    int width = abs(end_col - start_col);
    int max_value = 0;

    for (int i = 0; i <= height; i++) {
        for (int j = 0; j <= width; j++) {
            max_value = max(max_value, spiral_matrix[i][j]);
        }
    }

    int max_digit_count = to_string(max_value).length();

    for (int i = 0; i <= height; i++) {
        for (int j = 0; j <= width; j++) {
            cout << string(max_digit_count - to_string(spiral_matrix[i][j]).length(), ' ');
            cout << spiral_matrix[i][j] << ' ';
        }

        cout << '\n';
    }
}

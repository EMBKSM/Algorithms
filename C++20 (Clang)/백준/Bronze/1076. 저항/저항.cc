#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<string> color_list = { 
        "black", "brown", "red", "orange", "yellow", 
        "green", "blue", "violet", "grey", "white" 
    };

    vector<int> mem(3);
    long long result = 0;
    
    for (int i = 0; i < 3; i++) {
        string input_color;
        cin >> input_color;

        for (int j = 0; j < 10; j++) {
            if (color_list[j] == input_color) {
                mem[i] = j;
                break;
            }
        }
    }

    result = mem[0] * 10 + mem[1];
    for (int i = 0; i < mem[2]; i++) {
        result *= 10;
    }

    cout << result << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

vector<int> computePi(const string& pattern) {
    int m = pattern.size();
    vector<int> pi(m, 0);
    int j = 0; 

    for (int i = 1; i < m; ++i) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = pi[j - 1]; 
        }
        if (pattern[i] == pattern[j]) {
            ++j;
            pi[i] = j;
        }
    }
    return pi;
}


void kmpSearch(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();
    vector<int> pi = computePi(pattern);
    int j = 0; 

    for (int i = 0; i < n; ++i) {
        while (j > 0 && text[i] != pattern[j]) {
            j = pi[j - 1];
        }
        if (text[i] == pattern[j]) {
            if (j == m - 1) {
                cnt++;
                j = pi[j];
            }
            else {
                ++j;
            }
        }
    }
    cout << cnt;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, text_len;
    string ios = "IOI", text;

    cin >> n;

    for (int i = 2; i <= n; i++) {
        ios += "OI";
    }

    cin >> text_len;
    cin >> text;

    kmpSearch(text, ios);
}
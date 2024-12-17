#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

void createBadCharTable(const string& pattern, vector<int>& badCharTable) {
    badCharTable.assign(256, -1);
    for (int i = 0; i < pattern.size(); i++) {
        badCharTable[pattern[i]] = i;
    }
}


void createGoodSuffixTable(const string& pattern, vector<int>& goodSuffixTable) {
    int m = pattern.size();
    goodSuffixTable.resize(m + 1);

    vector<int> border(m + 1, 0);
    int i = m, j = m + 1;
    border[i] = j;


    while (i > 0) {
        while (j <= m && pattern[i - 1] != pattern[j - 1]) {
            if (goodSuffixTable[j] == 0) {
                goodSuffixTable[j] = j - i;
            }
            j = border[j];
        }
        i--;
        j--;
        border[i] = j;
    }


    for (int i = 0; i <= m; i++) {
        if (goodSuffixTable[i] == 0) {
            goodSuffixTable[i] = j;
        }
        if (i == j) {
            j = border[j];
        }
    }
}


void boyerMooreSearch(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();

    vector<int> badCharTable;
    vector<int> goodSuffixTable;

    createBadCharTable(pattern, badCharTable);
    createGoodSuffixTable(pattern, goodSuffixTable);

    int shift = 0;
    while (shift <= (n - m)) {
        int j = m - 1;
        while (j >= 0 && pattern[j] == text[shift + j]) {
            j--;
        }

        if (j < 0) {
            cnt++;
            shift += goodSuffixTable[0];
        }
        else {
            int goodSuffixShift = (j + 1 < goodSuffixTable.size()) ? goodSuffixTable[j + 1] : m;
            int badCharShift = max(1, j - badCharTable[text[shift + j]]);
            shift += max(badCharShift, goodSuffixShift);
        }
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, text_len;
    string ios = "IOI",text;

    cin >> n;

    for (int i = 2; i <= n; i++) {
        ios += "OI";
    }

    cin >> text_len;
    cin >> text;

    boyerMooreSearch(text, ios);
}
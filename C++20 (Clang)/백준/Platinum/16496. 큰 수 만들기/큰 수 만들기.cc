#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b) {
    if (a == b) return false;
    string ab = a + b;
    string ba = b + a;
    if (ab > ba) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<string> num_list;
    bool check= true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        num_list.push_back(temp);
        if (temp != "0") {
            check = false;
        }
    }
    if (check) {
        cout << 0;
    }
    else {
        sort(num_list.begin(), num_list.end(), cmp);
        for (auto a : num_list) {
            cout << a;
        }
    }
    return 0;
}
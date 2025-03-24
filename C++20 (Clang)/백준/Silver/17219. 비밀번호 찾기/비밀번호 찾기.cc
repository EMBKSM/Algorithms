#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> site_pwd;

    for (int i = 0; i < n; i++) {
        string site, pwd;
        cin >> site >> pwd;
        site_pwd[site] = pwd;
    }

    for (int i = 0; i < m; i++) {
        string query;
        cin >> query;
        cout << site_pwd[query] << "\n";
    }
}

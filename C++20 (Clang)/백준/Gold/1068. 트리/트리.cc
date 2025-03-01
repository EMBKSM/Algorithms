#include <bits/stdc++.h>

#define ll long long

using namespace std;

class Tree {
private:
    vector<vector<ll>> tree;
    ll n, k, leaf_count = 0, root;

public:
    Tree(ll node_count) {
        n = node_count;
        tree.resize(n);
    }

    void in_k(int ks) {
        k = ks;
    }

    void add_edge(ll parent, ll child) {
        if (parent == -1) {
            root = child;
        }
        else {
            tree[parent].push_back(child);
        }
    }

    ll dfs(ll node) {
        if (node == k) {
            return -1;
        }
        if (tree[node].empty()) {
            leaf_count++;
            return 0;
        }
        for (ll i = 0; i < tree[node].size(); i++) {
            ll result = dfs(tree[node][i]);
            if (result == -1 && tree[node].size() == 1) {
                leaf_count++;
            }
        }
        return 0;
    }

    void solve() {
        dfs(root);
        cout << leaf_count;
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    Tree tree(n);

    for (ll i = 0; i < n; i++) {
        ll parent;
        cin >> parent;
        tree.add_edge(parent, i);
    }
    ll temp;
    cin >> temp;
    
    tree.in_k(temp);
    tree.solve();

    return 0;
}

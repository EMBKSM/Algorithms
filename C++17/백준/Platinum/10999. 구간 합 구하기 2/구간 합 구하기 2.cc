#include <bits/stdc++.h>
using namespace std;

class FenwickTree {
public:
    FenwickTree(long long size);
    void range_update(long long left, long long right, long long data);
    long long range_query(long long left, long long right);

private:
    long long* tree1; // For point updates
    long long* tree2; // For difference tracking
    long long fenwick_tree_size;

    void add(long long* tree, long long i, long long data);
    long long sum(long long* tree, long long i);
};


FenwickTree::FenwickTree(long long size) {
    fenwick_tree_size = size;
    tree1 = new long long[fenwick_tree_size + 1]();
    tree2 = new long long[fenwick_tree_size + 1]();
}

// Add data to a tree
void FenwickTree::add(long long* tree, long long i, long long data) {
    while (i <= fenwick_tree_size) {
        tree[i] += data;
        i += (i & -i);
    }
}

long long FenwickTree::sum(long long* tree, long long i) {
    long long ret = 0;
    while (i > 0) {
        ret += tree[i];
        i -= (i & -i);
    }
    return ret;
}


void FenwickTree::range_update(long long left, long long right, long long data) {
    add(tree1, left, data);
    add(tree1, right + 1, -data);
    add(tree2, left, data * (left - 1));
    add(tree2, right + 1, -data * right);
}

long long FenwickTree::range_query(long long left, long long right) {
    auto prefix_sum = [&](long long x) {
        return sum(tree1, x) * x - sum(tree2, x);
        };
    return prefix_sum(right) - prefix_sum(left - 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, m, k;
    cin >> n >> m >> k;

    long long* num_list = new long long[n + 1];
    for (long long i = 1; i <= n; i++) {
        cin >> num_list[i];
    }

    FenwickTree tree(n);

    for (long long i = 1; i <= n; i++) {
        tree.range_update(i, i, num_list[i]);
    }

    for (long long i = 0; i < m + k; i++) {
        long long a, b, c, d;
        cin >> a;
        if (a == 1) {
            cin >> b >> c >> d;
            tree.range_update(b, c, d);
        }
        else if (a == 2) {
            cin >> b >> c;
            cout << tree.range_query(b, c) << "\n";
        }
    }

    delete[] num_list; // Free allocated memory
    return 0;
}

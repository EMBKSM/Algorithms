#include <bits/stdc++.h>

class FenwickTree
{
public:
    FenwickTree(long long change_array[], long long size);

    long long pointU_rangeQ(long long i, long long data, long long left, long long right);
    long long pointQ_rangeU(long long i, long long data, long long left, long long right);
    long long rangeU_rangeQ(long long left, long long right, long long data);

    long long point_query(long long i);
    long long range_query(long long left, long long right);

    void point_update(long long i, long long data);
    void range_update(long long left, long long right, long long data);
private:
    long long* fenwick_tree_data;
    long long fenwick_tree_size;

    long long sum(long long i);
    void add(long long i, long long data);
};

FenwickTree::FenwickTree(long long change_array[], long long size) {
    fenwick_tree_size = size;
    fenwick_tree_data = new long long[fenwick_tree_size + 1];
    memset(fenwick_tree_data, 0, (fenwick_tree_size + 1) * sizeof(long long));

    for (long long i = 1; i <= fenwick_tree_size; i++) {
        fenwick_tree_data[i] += change_array[i - 1];
        long long parent = i + (i & -i);
        if (parent <= fenwick_tree_size) {
            fenwick_tree_data[parent] += fenwick_tree_data[i];
        }
    }
}

long long FenwickTree::sum(long long i) {
    long long ret = 0;
    while (i > 0) {
        ret += fenwick_tree_data[i];
        i -= (i & -i);
    }
    return ret;
}

void FenwickTree::add(long long i, long long data) {
    while (i <= fenwick_tree_size) {
        fenwick_tree_data[i] += data;
        i += (i & -i);
    }
}

void FenwickTree::point_update(long long i, long long data) {
    long long current_value = point_query(i);
    long long delta = data - current_value;
    add(i, delta);
}

long long FenwickTree::range_query(long long left, long long right) {
    return sum(right) - sum(left - 1);
}

void FenwickTree::range_update(long long left, long long right, long long data) {
    add(left, data);
    if (right + 1 <= fenwick_tree_size) {
        add(right + 1, -data);
    }
}

long long FenwickTree::point_query(long long i) {
    return range_query(i, i);
}

long long FenwickTree::pointU_rangeQ(long long i, long long data, long long left, long long right) {
    point_update(i, data);
    return range_query(left, right);
}

long long FenwickTree::pointQ_rangeU(long long i, long long data, long long left, long long right) {
    range_update(left, right, data);
    return point_query(i);
}

long long FenwickTree::rangeU_rangeQ(long long left, long long right, long long data) {
    range_update(left, right, data);
    return range_query(left, right);
}


using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, m, k;
    cin >> n >> m >> k;
    long long* num_list = new long long[n];
    for (long long i = 0; i < n; i++) {
        cin >> num_list[i];
    }
    FenwickTree tree(num_list, n);

    for (long long i = 0; i < m + k; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            tree.point_update(b, c);
        }
        else if (a == 2) {
            cout << tree.range_query(b, c) << "\n";
        }
    }
}
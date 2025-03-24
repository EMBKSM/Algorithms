#include <bits/stdc++.h>

using namespace std;

class FenwickTree
{
public:
    FenwickTree(int change_array[], int size);

    int pointU_rangeQ(int i, int data, int left, int right);
    int pointQ_rangeU(int i, int data, int left, int right);
    int rangeU_rangeQ(int left, int right, int data);

    int point_query(int i);
    int range_query(int left, int right);

    void point_update(int i, int data);
    void range_update(int left, int right, int data);
private:
    int* fenwick_tree_data;
    int fenwick_tree_size;

    int sum(int i);
    void add(int i, int data);
};

FenwickTree::FenwickTree(int change_array[], int size) {
    fenwick_tree_size = size;
    fenwick_tree_data = new int[fenwick_tree_size + 1];
    memset(fenwick_tree_data, 0, (fenwick_tree_size + 1) * sizeof(int));

    for (int i = 1; i <= fenwick_tree_size; i++) {
        fenwick_tree_data[i] += change_array[i - 1];
        int parent = i + (i & -i);
        if (parent <= fenwick_tree_size) {
            fenwick_tree_data[parent] += fenwick_tree_data[i];
        }
    }
}

int FenwickTree::sum(int i) {
    int ret = 0;
    while (i > 0) {
        ret += fenwick_tree_data[i];
        i -= (i & -i);
    }
    return ret;
}

void FenwickTree::add(int i, int data) {
    while (i <= fenwick_tree_size) {
        fenwick_tree_data[i] += data;
        i += (i & -i);
    }
}

void FenwickTree::point_update(int i, int data) {
    int current_value = point_query(i);
    int delta = data - current_value;
    add(i, delta);
}

int FenwickTree::range_query(int left, int right) {
    return sum(right) - sum(left - 1);
}

void FenwickTree::range_update(int left, int right, int data) {
    add(left, data);
    if (right + 1 <= fenwick_tree_size) {
        add(right + 1, -data);
    }
}

int FenwickTree::point_query(int i) {
    return range_query(i, i);
}

int FenwickTree::pointU_rangeQ(int i, int data, int left, int right) {
    point_update(i, data);
    return range_query(left, right);
}

int FenwickTree::pointQ_rangeU(int i, int data, int left, int right) {
    range_update(left, right, data);
    return point_query(i);
}

int FenwickTree::rangeU_rangeQ(int left, int right, int data) {
    range_update(left, right, data);
    return range_query(left, right);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int* num_list = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> num_list[i];
    }

    FenwickTree tree(num_list, n);

    for (int i = 0; i < m; i++) {
        int temp_1, temp_2;
        cin >> temp_1 >> temp_2;
        cout << tree.range_query(temp_1, temp_2) << "\n";
    }

}
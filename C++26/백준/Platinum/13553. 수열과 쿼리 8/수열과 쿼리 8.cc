#include <bits/stdc++.h>

using namespace std;

class FenwickTree {
public:
    int fenwick_tree_size;
    int* fenwick_tree_data;

    FenwickTree(int change_array[], int size) {
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

    int sum(int i) {
        int ret = 0;
        while (i > 0) {
            ret += fenwick_tree_data[i];
            i -= (i & -i);
        }
        return ret;
    }

    void add(int i, int data) {
        while (i <= fenwick_tree_size) {
            fenwick_tree_data[i] += data;
            i += (i & -i);
        }
    }

    void point_update(int i, int data) {
        int current_value = point_query(i); 
        int delta = data - current_value;  
        add(i, delta);                     
    }

    int range_query(int left, int right) {
        return sum(right) - sum(left - 1);
    }

    void range_update(int left, int right, int data) {
        add(left, data);
        if (right + 1 <= fenwick_tree_size) {
            add(right + 1, -data);
        }
    }

    int point_query(int i) {
        return range_query(i, i);
    }

    int pointU_rangeQ(int i, int data, int left, int right) {
        point_update(i, data);
        return range_query(left, right);
    }

    int pointQ_rangeU(int i, int data, int left, int right) {
        range_update(left, right, data);
        return point_query(i);
    }

    int rangeU_rangeQ(int left, int right, int data) {
        range_update(left, right, data);
        return range_query(left, right);
    }
};

struct Query {
    int l, r, id;
    int sqrtN;

    bool operator<(const Query& o) const {
        if (l / sqrtN != o.l / sqrtN) {
            return l < o.l;
        }
        if ((l / sqrtN) & 1) {
            return r < o.r;
        } 
        return r > o.r;
    }
};

int N, K, M;
int A[100005];
long long ans[100005];
long long current_ans = 0;
int initial_zeros[100005];
FenwickTree* tree;

void add_element(int idx) {
    int val = A[idx];
    int L = val - K;
    int R = val + K;
    
    if (L < 1) {
        L = 1;
    }
    if (R > 100000) {
        R = 100000;
    }
    
    if (L <= R) {
        current_ans += tree->range_query(L, R);
    }
    tree->add(val, 1);
}

void remove_element(int idx) {
    int val = A[idx];
    int L = val - K;
    int R = val + K;

    if (L < 1) {
        L = 1;
    }
    if (R > 100000) {
        R = 100000;
    }

    tree->add(val, -1);
    if (L <= R) {
        current_ans -= tree->range_query(L, R);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    if (!(cin >> N >> K)) {
        return 0;
    }

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    tree = new FenwickTree(initial_zeros, 100000);

    cin >> M;
    vector<Query> queries(M);
    int sqrtN = sqrt(N);
    
    for (int i = 0; i < M; i++) {
        cin >> queries[i].l >> queries[i].r;
        queries[i].id = i;
        queries[i].sqrtN = sqrtN;
    }

    sort(queries.begin(), queries.end());

    int curL = 1;
    int curR = 0;

    for (int i = 0; i < M; i++) {
        int l = queries[i].l;
        int r = queries[i].r;

        while (curL > l) {
            curL--;
            add_element(curL);
        }
        while (curR < r) {
            curR++;
            add_element(curR);
        }
        while (curL < l) {
            remove_element(curL);
            curL++;
        }
        while (curR > r) {
            remove_element(curR);
            curR--;
        }

        ans[queries[i].id] = current_ans;
    }

    for (int i = 0; i < M; i++) {
        cout << ans[i] << "\n";
    }
}
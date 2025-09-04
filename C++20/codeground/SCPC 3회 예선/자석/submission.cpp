#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vll = vector<ll>;
using vint = vector<int>;
using vpii = vector<pii>;

#define all(v) v.begin(), v.end()

const ll INF = 1e18;

struct SegmentTree {
    int size;
    vll tree;

    void init(int n) {
        for (size = 1; size <= n; size *= 2);
        tree.assign(2 * size, INF);
    }

    void update(int idx, ll value) {
        idx += size;
        tree[idx] = value;
        for (idx /= 2; idx > 0; idx /= 2) {
            tree[idx] = min(tree[2 * idx], tree[2 * idx + 1]);
        }
    }

    ll query(int left, int right) {
        ll result = INF;
        for (left += size, right += size; left <= right; left /= 2, right /= 2) {
            if (left % 2 == 1) result = min(result, tree[left++]);
            if (right % 2 == 0) result = min(result, tree[right--]);
        }
        return result;
    }
};

void solve() {
    int n;
    cin >> n;

    struct Bar { int start, end, cost; };
    vector<Bar> bars(n);
    for (auto& b : bars) {
        cin >> b.start >> b.end >> b.cost;
    }

    sort(all(bars), [](const Bar& a, const Bar& b) {
        if (a.start != b.start) {
            return a.start > b.start;
        }
        return a.end < b.end;
        });

    vint critical_starts, critical_ends;
    for (const auto& bar : bars) {
        if (!critical_ends.empty() && critical_ends.back() <= bar.end) {
            continue;
        }
        critical_starts.push_back(bar.start);
        critical_ends.push_back(bar.end);
    }
    reverse(all(critical_starts));
    reverse(all(critical_ends));

    int num_critical_points = critical_starts.size();
    if (num_critical_points == 0) {
        cout << 0 << '\n';
        return;
    }

    vector<vpii> bars_ending_at(num_critical_points + 1);
    for (const auto& bar : bars) {
        int compressed_start_idx = lower_bound(all(critical_ends), bar.start) - critical_ends.begin() + 1;

        int compressed_end_idx = upper_bound(all(critical_starts), bar.end) - critical_starts.begin();

        if (compressed_end_idx > 0) {
            bars_ending_at[compressed_end_idx].emplace_back(compressed_start_idx, bar.cost);
        }
    }

    vll dp(num_critical_points + 1, INF);
    SegmentTree seg_tree;
    seg_tree.init(num_critical_points + 1);

    seg_tree.update(0, 0);

    for (int i = 1; i <= num_critical_points; ++i) {
        for (const auto& p : bars_ending_at[i]) {
            int start_idx = p.first;
            int cost = p.second;
            ll prev_min_cost = seg_tree.query(start_idx - 1, i - 1);

            if (prev_min_cost != INF) {
                dp[i] = min(dp[i], prev_min_cost + cost);
            }
        }
        seg_tree.update(i, dp[i]);
    }

    cout << dp[num_critical_points] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        cout << "Case #" << i << '\n';
        solve();
    }

    return 0;
}

#include <bits/stdc++.h>
#include <random>
#include <chrono>

using namespace std;
using ll = long long;
using pii = pair<int, int>;

mt19937 rng(42);


vector<vector<int>> adj;

ll evaluate(const vector<int>& pos, const vector<pii>& edges) {
    ll cost = 0;
    for (const auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        cost += abs(pos[u] - pos[v]);
    }
    return cost;
}


vector<int> simulated_annealing(int n, const vector<pii>& edges) {
    vector<int> perm(n);
    iota(perm.begin(), perm.end(), 0);
    shuffle(perm.begin(), perm.end(), rng);

    vector<int> pos(n);
    for (int i = 0; i < n; ++i) pos[perm[i]] = i;

    ll current_cost = evaluate(pos, edges);
    ll best_cost = current_cost;
    vector<int> best_perm = perm;

    double T = 1000.0;
    double Tmin = 1e-4;
    double alpha = 0.99999;

    for (int iter = 0; iter < 1400000 && T > Tmin; ++iter) {
        int i = rng() % n;
        int j = rng() % n;
        if (i == j) continue;

        int u = perm[i];
        int v = perm[j];

        ll delta = 0;
        for (int neighbor : adj[u]) {
            if (neighbor != v) {
                delta -= abs(pos[u] - pos[neighbor]);
                delta += abs(pos[v] - pos[neighbor]);
            }
        }

        for (int neighbor : adj[v]) {
            if (neighbor != u) {
                delta -= abs(pos[v] - pos[neighbor]);
                delta += abs(pos[u] - pos[neighbor]);
            }
        }

        if (delta < 0 || exp(-delta / T) > uniform_real_distribution<>(0, 1)(rng)) {
            current_cost += delta;
            swap(perm[i], perm[j]);
            swap(pos[u], pos[v]);

            if (current_cost < best_cost) {
                best_cost = current_cost;
                best_perm = perm;
            }
        }

        T *= alpha;
    }

    return best_perm;
}

int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for (int test_case = 0; test_case < T; ++test_case) {
        int n, m;
        cin >> n >> m;
        vector<pii> edges;
        adj.assign(n, vector<int>());

        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            edges.emplace_back(u, v);

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> order = simulated_annealing(n, edges);

        vector<int> pos(n);
        for (int i = 0; i < n; ++i) pos[order[i]] = i;

        ll total_length = evaluate(pos, edges);

        cout << "Case #" << test_case + 1 << "\n";
        cout << total_length << "\n";
        for (int v : order) cout << v << " ";
        cout << "\n";
    }
    return 0;
}

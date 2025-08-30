/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <bits/stdc++.h>

using namespace std;

const long long INF = LLONG_MAX;

void solve() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> graph[N + 1];
    for (int i = 0; i < M; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    vector<vector<long long>> all_dists(N + 1, vector<long long>(N + 1, INF));
    vector<vector<long long>> all_counts(N + 1, vector<long long>(N + 1, 0));

    for (int start_node = 1; start_node <= N; ++start_node) {
        all_dists[start_node][start_node] = 0;
        all_counts[start_node][start_node] = 1;
        
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        pq.push({0, start_node});

        while (!pq.empty()) {
            long long dist = pq.top().first;
            int u = pq.top().second;
            pq.pop();

            if (dist > all_dists[start_node][u]) {
                continue;
            }

            for (auto& edge : graph[u]) {
                int v = edge.first;
                int weight = edge.second;
                long long new_dist = dist + weight;

                if (new_dist < all_dists[start_node][v]) {
                    all_dists[start_node][v] = new_dist;
                    all_counts[start_node][v] = all_counts[start_node][u];
                    pq.push({new_dist, v});
                } else if (new_dist == all_dists[start_node][v]) {
                    all_counts[start_node][v] += all_counts[start_node][u];
                }
            }
        }
    }

    vector<int> essential_nodes;
    for (int k = 1; k <= N; ++k) {
        bool is_essential = false;
        for (int s = 1; s <= N; ++s) {
            if (is_essential) {
                break;
            }
            for (int d = 1; d <= N; ++d) {
                if (s == k || d == k || s == d) {
                    continue;
                }
                
                if (all_dists[s][k] == INF || all_dists[k][d] == INF) {
                    continue;
                }

                if (all_dists[s][k] + all_dists[k][d] == all_dists[s][d]) {
                    if (all_counts[s][k] * all_counts[k][d] == all_counts[s][d]) {
                        essential_nodes.push_back(k);
                        is_essential = true;
                        break;
                    }
                }
            }
        }
    }
    
    if (essential_nodes.empty()) {
        cout << 0 << "\n";
    } else {
        cout << essential_nodes.size();
        for (int node : essential_nodes) {
            cout << " " << node;
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        cout << "Case #" << t << "\n";
        solve();
    }

}

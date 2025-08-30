/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <bits/stdc++.h>

using namespace std;

const long long INF = numeric_limits<long long>::max();

struct Node {
    long long dist;
    int vertex;
    int shelter;

    bool operator>(const Node& other) const {
        if (dist == other.dist) {
            return vertex > other.vertex;
        }
        return dist > other.dist;
    }
};

void solve(int case_num) {
    int N, M, K;
    cin >> N >> M >> K;

    vector<pair<int, int>> adj[N + 1];
    for (int i = 0; i < M; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<int> shelters(K);
    vector<long long> dist(N + 1, INF);
    vector<int> nearest_shelter(N + 1, 0);
    priority_queue<Node, vector<Node>, greater<Node>> pq;

    for (int i = 0; i < K; ++i) {
        cin >> shelters[i];
        int s = shelters[i];
        dist[s] = 0;
        nearest_shelter[s] = s;
        pq.push({0, s, s});
    }

    while (!pq.empty()) {
        Node current = pq.top();
        pq.pop();

        long long d = current.dist;
        int u = current.vertex;
        int s_id = current.shelter;

        if (d > dist[u]) {
            continue;
        }
        if (d == dist[u] && s_id > nearest_shelter[u]) {
            continue;
        }

        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                nearest_shelter[v] = s_id;
                pq.push({dist[v], v, s_id});
            } else if (dist[u] + weight == dist[v]) {
                if (s_id < nearest_shelter[v]) {
                    nearest_shelter[v] = s_id;
                    pq.push({dist[v], v, s_id});
                }
            }
        }
    }

    long long total_dist_sum = 0;
    long long shelter_id_sum = 0;

    for (int i = 1; i <= N; ++i) {
        total_dist_sum += dist[i];
        shelter_id_sum += nearest_shelter[i];
    }

    cout << "Case #" << case_num << endl;
    cout << total_dist_sum << endl;
    cout << shelter_id_sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        solve(i);
    }
}

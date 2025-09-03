/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

struct Edge {
    int to;
    int capacity;
    int rev; 
};

vector<vector<Edge>> adj;
vector<int> level;
vector<int> iter;

void add_edge(int u, int v, int cap) {
    adj[u].push_back({v, cap, (int)adj[v].size()});
    adj[v].push_back({u, 0, (int)adj[u].size() - 1});
}

bool bfs(int s, int t) {
    level.assign(adj.size(), -1);
    queue<int> q;
    level[s] = 0;
    q.push(s);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (const auto& edge : adj[v]) {
            if (edge.capacity > 0 && level[edge.to] < 0) {
                level[edge.to] = level[v] + 1;
                q.push(edge.to);
            }
        }
    }
    return level[t] != -1;
}

int dfs(int v, int t, int f) {
    if (v == t) return f;
    for (int& i = iter[v]; i < adj[v].size(); ++i) {
        Edge& e = adj[v][i];
        if (e.capacity > 0 && level[v] < level[e.to]) {
            int d = dfs(e.to, t, min(f, e.capacity));
            if (d > 0) {
                e.capacity -= d;
                adj[e.to][e.rev].capacity += d;
                return d;
            }
        }
    }
    return 0;
}

int max_flow(int s, int t) {
    int flow = 0;
    while (bfs(s, t)) {
        iter.assign(adj.size(), 0);
        int f;
        while ((f = dfs(s, t, INF)) > 0) {
            flow += f;
        }
    }
    return flow;
}

void solve() {
    int N, K;
    cin >> N >> K;

    vector<tuple<int, int, int>> shoes(N);
    long long total_processing_time = 0;
    for (int i = 0; i < N; ++i) {
        cin >> get<0>(shoes[i]) >> get<1>(shoes[i]) >> get<2>(shoes[i]);
        total_processing_time += get<2>(shoes[i]);
    }

    vector<pair<int, int>> artisans(K);
    for (int i = 0; i < K; ++i) {
        cin >> artisans[i].first >> artisans[i].second;
    }

    int max_time = 100;
    int source = 0;
    int shoe_node_start = 1;
    int time_node_start = shoe_node_start + N;
    int sink = time_node_start + max_time;
    int total_nodes = sink + 1;

    adj.assign(total_nodes, vector<Edge>());

    for (int i = 0; i < N; ++i) {
        add_edge(source, shoe_node_start + i, get<2>(shoes[i]));
    }

    for (int i = 0; i < N; ++i) {
        int a = get<0>(shoes[i]);
        int f = get<1>(shoes[i]);
        for (int t = a; t < f; ++t) {
            add_edge(shoe_node_start + i, time_node_start + t, 1);
        }
    }
    
    vector<int> artisan_counts(max_time, 0);
    for(int t = 0; t < max_time; ++t) {
        for(int j = 0; j < K; ++j) {
            if(t >= artisans[j].first && t < artisans[j].second) {
                artisan_counts[t]++;
            }
        }
    }

    for (int t = 0; t < max_time; ++t) {
        if (artisan_counts[t] > 0) {
            add_edge(time_node_start + t, sink, artisan_counts[t]);
        }
    }

    int flow = max_flow(source, sink);

    if (flow == total_processing_time) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    setbuf(stdout, 0);

    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        cout << "Case #" << i << endl;
        solve();
    }
    return 0;
}

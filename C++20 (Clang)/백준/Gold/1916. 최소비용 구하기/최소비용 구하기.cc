#include <bits/stdc++.h>

#define INF 2147483647
#define MAX_NODES 1001

using namespace std;

int num_vertices, num_edges, start_node, arrival_node;
int shortest_dist[MAX_NODES];
vector<pair<int, int>> graph[MAX_NODES];

void initialize_graph() {
    cin >> num_vertices >> num_edges;

    for (int i = 0; i < num_edges; i++) {
        int from, to, weight;
        cin >> from >> to >> weight;
        graph[from].push_back({ to, weight });
    }
    cin >> start_node >> arrival_node;
    fill(shortest_dist, shortest_dist + num_vertices + 1, INF);
}

void dijkstra() {
    priority_queue<pair<int, int>> max_heap;
    max_heap.push({ 0, start_node });
    shortest_dist[start_node] = 0;

    while (!max_heap.empty()) {
        int current_dist = -max_heap.top().first;
        int current_node = max_heap.top().second;
        max_heap.pop();

        if (shortest_dist[current_node] < current_dist) continue;

        for (const auto& edge : graph[current_node]) {
            int next_node = edge.first;
            int edge_weight = edge.second;

            if (shortest_dist[next_node] > current_dist + edge_weight) {
                shortest_dist[next_node] = current_dist + edge_weight;
                max_heap.push({ -shortest_dist[next_node], next_node });
            }
        }
    }
    cout << shortest_dist[arrival_node] << "\n";
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    initialize_graph();
    dijkstra();

    return 0;
}
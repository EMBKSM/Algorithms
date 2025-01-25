#include <bits/stdc++.h>

using namespace std;

void bfs(const vector<vector<int>>& graph, vector<int>& result, int start) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

void dfs(const vector<vector<int>>& graph, vector<int>& result, vector<bool>& visited, int node) {
    visited[node] = true;
    result.push_back(node);

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(graph, result, visited, neighbor);
        }
    }
}

void printResult(const vector<int>& result) {
    for (int node : result) {
        cout << node << " ";
    }
    cout << '\n';
}

int main() {
    int n, m, v;
    cin >> n >> m >> v;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    vector<int> result_bfs, result_dfs;
    bfs(graph, result_bfs, v);

    vector<bool> visited(n + 1, false);
    dfs(graph, result_dfs, visited, v);

    printResult(result_dfs);
    printResult(result_bfs);
}

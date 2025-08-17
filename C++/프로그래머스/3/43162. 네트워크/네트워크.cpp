#include <bits/stdc++.h>

using namespace std;

void DFS(int n, int start, const vector<vector<int>>& graph, vector<bool>& visit) {
    visit[start] = true;
    for (int i = 0; i < n; i++) {
        if (!visit[i] && graph[start][i]) {
            DFS(n, i, graph, visit);
        }
    }
}
int solution(int n, vector<vector<int>> computers) {
    int network_count = 0;
    vector<bool> visit(n, false);
    for (int i = 0; i < n; i++) {
        if (!visit[i]) {
            DFS(n, i, computers, visit);
            network_count++;
        }
    }
    return network_count;
}
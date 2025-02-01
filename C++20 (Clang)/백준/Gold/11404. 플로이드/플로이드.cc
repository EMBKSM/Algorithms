#include <bits/stdc++.h>
#define INF 1000000000

using namespace std;



void summon_graph_and_ployd() {
	int num_vertices, num_edges;
	cin >> num_vertices;
	cin >> num_edges;
	static int** ployd = new int* [num_vertices + 1];
	for (int i = 0; i <= num_vertices; i++) {
		ployd[i] = new int[num_vertices + 1];
	}
	for (int i = 1; i <= num_vertices; i++) {
		for (int j = 1; j <= num_vertices; j++) {
			ployd[i][j] = (i == j) ? 0 : INF;
		}
	}
	for (int i = 0; i < num_edges; i++) {
		int send, resiv, weight;
		cin >> send >> resiv >> weight;
		ployd[send][resiv] = min(weight, ployd[send][resiv]);
	}

	for (int k = 1; k <= num_vertices; k++)
		for (int i = 1; i <= num_vertices; i++)
			for (int j = 1; j <= num_vertices; j++)
				if (ployd[i][k] + ployd[k][j] < ployd[i][j])
					ployd[i][j] = ployd[i][k] + ployd[k][j];

	for (int i = 1; i <= num_vertices; i++) {
		for (int j = 1; j <= num_vertices; j++) {
			if (ployd[i][j] == INF) {
				cout << 0 << " ";
			}
			else {
				cout << ployd[i][j] << " ";
			}
		}
		cout << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	summon_graph_and_ployd();
}
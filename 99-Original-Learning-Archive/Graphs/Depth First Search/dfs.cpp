#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";

    for (int x : adj[node]) {
        if (!visited[x]) {
            dfs(x, adj, visited);
        }
    }
}
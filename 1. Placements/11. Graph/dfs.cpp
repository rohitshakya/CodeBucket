#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void dfs(int start, vector<vector<int>> &adj,  vector<bool>& visited) {
   
    visited[start]=true;
    cout << start << " ";
    for(auto neighbor: adj[start])
    {
        if (!visited[neighbor]) {
            visited[neighbor] = true;
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int n = 6; // Number of nodes (0 to 5)
    vector<vector<int>> adj = {
        {1, 2}, // Edges for node 0
        {0, 3, 4}, // Edges for node 1
        {0, 4}, // Edges for node 2
        {1, 5}, // Edges for node 3
        {1, 2, 5}, // Edges for node 4
        {3, 4} // Edges for node 5
    };
    vector<bool> visited(n, false);
    dfs(0, adj, visited); // Starting BFS from node 0
    return 0;
}



#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int start, vector<vector<int>> &adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        visited[node]=true;
        cout << node << " ";
        for(auto neighbor: adj[node])
        {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
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

    bfs(0, adj, n); // Starting BFS from node 0
    return 0;
}

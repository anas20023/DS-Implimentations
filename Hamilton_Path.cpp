#include <bits/stdc++.h>
using namespace std;

// Graph -> List Representation
const int N = 2e5 + 10;
vector<int> list_graph[N];
vector<bool> visited(N, false);
vector<int> path;

bool findHamiltonianPath(int node, int total_nodes) {
    path.push_back(node);
    visited[node] = true;

    if (path.size() == total_nodes) {
        return true;
    }

    for (int neighbor : list_graph[node]) {
        if (!visited[neighbor]) {
            if (findHamiltonianPath(neighbor, total_nodes)) {
                return true;
            }
        }
    }

    visited[node] = false;
    path.pop_back();
    return false;
}

int main() {
    int v, e;
    cin >> v >> e;

    // Reading edges
    for (int i = 0; i < e; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        list_graph[v1].push_back(v2);
        // Uncomment for undirected graph:
        // list_graph[v2].push_back(v1);
    }

    bool found = false;

    // Trying to find Hamiltonian Path starting from each vertex
    for (int i = 1; i <= v; i++) {
        fill(visited.begin(), visited.begin() + v + 1, false);
        path.clear();
        if (findHamiltonianPath(i, v)) {
            found = true;
            break;
        }
    }

    if (found) {
        // Output the Hamiltonian Path
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}

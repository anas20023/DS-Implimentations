#include <bits/stdc++.h>
using namespace std;
// Graph -> List Representation
const int N = 2e5 + 10;
vector<int> list_graph[N];
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        list_graph[v1].push_back(v2);
        list_graph[v2].push_back(v1);
    }
    int q;
    cin >> q;
    while (q--)
    {
        // Time Complexity -> O(1) for Each Query for find the weight of an edge connected to v1 and v2 vertices.
        int v1, v2;
        cin >> v1 >> v2;
        for (int i = 0; i < e; i++)
        {
            if (list_graph[v1] == 1)
            {
                cout << "Weight of the Edge Connected to Vertices " << v1 << " and " << v2 << " is " << mgraphh[v1][v2] << endl;
            }
            else
            {
                cout << "There is no Edge Connected to Vertices " << v1 << " and " << v2 << endl;
            }
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// Graph -> Matrix Representation
const int N = 1e3 + 10;
int mgraphh[N][N];
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        mgraphh[v1][v2] = w;
        mgraphh[v2][v1] = w;
    }
    int q;
    cin >> q;
    while (q--)
    {
        // Time Complexity -> O(1) for Each Query for find the weight of an edge connected to v1 and v2 vertices.
        int v1, v2;
        cin >> v1 >> v2;
        if (mgraphh[v1][v2] > 0)
        {
            cout << "Weight of the Edge Connected to Vertices " << v1 << " and " << v2 << " is " << mgraphh[v1][v2] << endl;
        }
        else
        {
            cout << "There is no Edge Connected to Vertices " << v1 << " and " << v2 << endl;
        }
    }

    return 0;
}
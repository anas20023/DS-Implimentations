#include <bits/stdc++.h>
using namespace std;
// Graph -> Matrix Representation
const int N=1e3+10;
int mgraphh[N][N];
 // Space Complexity: O(N^2)
int main()
{
    int v,e;cin>>v>>e;
    for (int i = 0; i < e; i++)
    {
        int v1,v2;cin>>v1>>v2;
        mgraphh[v1][v2]=1;
        mgraphh[v2][v1]=1;
    }
    int q;cin>>q;
    while (q--)
    { // time complexity O(1) for each Query for Check v1 and v2 vertices are connected or not.
        int v1,v2;cin>>v1>>v2;
        if(mgraphh[v1][v2]==1) cout<<v1<<" and "<<v2<<" Are connected"<<endl;
        else cout<<v1<<" and "<<v2<<" Are Not connected"<<endl;
    }
    
    return 0;
}
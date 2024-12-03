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
        // Time Complexity -> O(e)[Worst Case] for Each Query.
        int v1, v2;
        cin >> v1 >> v2;
        bool flag=false;
        for (int i = 0; i < list_graph[v1].size(); i++)
        {
            //    cout<<list_graph[v1][i]<<" ";
            if(list_graph[v1][i]==v2) {flag=true;break;}
        }
        if(flag) cout<<v1<<" and "<<v2 <<" Are Connected"<<endl;
        else cout<<v1<<" and "<<v2 <<" Are Not Connected"<<endl;
    }

    return 0;
}
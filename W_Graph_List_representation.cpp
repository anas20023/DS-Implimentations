#include <bits/stdc++.h>
using namespace std;
// Graph -> List Representation
const int N = 2e5 + 10;
vector<pair<int,int>> list_graph[N];
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2,w;
        cin >> v1 >> v2>>w;
        list_graph[v1].push_back({v2,w});
        list_graph[v2].push_back({v1,w});
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
            //cout<<list_graph[v1][i].first<<" "<<list_graph[v1][i].second<<" \n";
            if (list_graph[v1][i].first == v2){
                cout<<"Weight btn "<<v1 <<" and "<<v2 <<" is "<<list_graph[v1][i].second<<" \n";
                flag=true;
                break;
            }
        }
        if(!flag) cout<<v1<<" and "<<v2 <<" Are Not Connected"<<endl;
    }

    return 0;
}
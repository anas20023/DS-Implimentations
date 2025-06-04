#include <bits/stdc++.h>
using namespace std;
vector<bool>vis(10005,false);


void DFS(vector<vector<int>>&graph, int src){
    int n = graph.size();
    vis[src]=true;
    cout<<src<<" ";
    for (int i = 1; i <n; i++)
    {
        if(!vis[i] && graph[src][i]){
            DFS(graph, i);
        }
    }
    
}
int main()
{
    int v,e;cin>>v>>e;
    vector<vector<int>>graph(v+1,vector<int>(v+1,0));
    for (int i = 0; i < e; i++)
    {
        int v1,v2;cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }
    DFS(graph,1);
    return 0;
}
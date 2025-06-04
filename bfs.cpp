#include <bits/stdc++.h>
using namespace std;

void BFS(vector<vector<int>>&graph,int src){
    vector<bool> vis(graph.size()+1,false);
    vis[src]=true;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int v=q.front();
        cout<<v<<" ";
        q.pop();
        for (int u = 1; u <=graph.size()+1; u++)
        {
            if(!vis[u] && graph[v][u]==1){
                vis[u]=true;
                q.push(u);
            }
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
    BFS(graph,1);
        
    return 0;
}
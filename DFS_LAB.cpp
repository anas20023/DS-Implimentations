#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int graph[N][N];
int v,e;
vector<bool>vis(N,false);
int DFS(int vertx){
    vis[vertx]=true;
    cout<<vertx<<" ";
    for (int i = 1; i <=v; i++)
    {
        if(!vis[i] && graph[vertx][i]) DFS(i);
    }
    
}
int main()
{
    cin>>v>>e;
    memset(graph,0,sizeof(graph));
    for (int i = 1; i <=e; i++)
    {
        int v1,v2;cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }
    DFS(1);
    
    return 0;
}
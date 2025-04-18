#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int graph[N][N]; 
vector<bool>vis(N,false);
int v,e;
int BFS(int vertx){
    queue<int>q;
    vis[vertx]=true;
    q.push(vertx);
    while (!q.empty())
    {
        int curr_node=q.front();
        q.pop();
        cout<<curr_node<<" ";
        for (int i = 1; i <=v; i++)
        {
            if(!vis[i] && graph[curr_node][i]){
                vis[i]=true;
                q.push(i);
            }
        }
        
    }
    
}
int main()
{
    cin>>v>>e;
    for (int i = 1; i <=e; i++)
    {
        int u,v;cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }
    BFS(1);
    
    return 0;
}
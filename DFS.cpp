#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005 
vector<int> g[N];
bool vis[N];
void DFS(int v){
    /// 1. check if vertice is visited or not, if not then mark it as visited
    if(vis[v]) {cout<<v<<" Is Visited \n"; return;}
    vis[v]=true;
    cout<<v<<endl;
    for (auto ch : g[v])
    {
        /// 2.
        cout<<"Parent "<<v<<" Child "<<ch<<" \n";
        DFS(ch);
        /// 3.
    }
    /// 4.
    
}
int main()
{
    int v,e;cin>>v>>e;
    for (int i = 0; i < e; i++)
    {
        int v1,v2;cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    DFS(1);
    for (int i = 1; i <=v; i++)
    {
        //cout<<i<<endl;
        for (int j = 0; j < g[i].size(); j++)
        {
            //cout<<g[i][j]<<" ";
        }
       // cout<<endl;
        
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

const int N=1e3+10;
vector<int>graph[N];
void BFS(int i,vector<int>&vis){
    queue<int>q;
            q.push(i);
            vis[i]=1;
            while (!q.empty())
            {
                int el=q.front();
                q.pop();
                for (auto j:graph[el] )
                {
                    if(!vis[j]){
                        vis[j]=1;
                        q.push(j);
                    }
                }
                
            }
}
int main()
{
    int v,e;cin>>v>>e;
    for (int i = 0; i < e; i++)
    {
        int x,y;cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    // for (int i = 0; i < v; i++)
    // {
    //     for (int j = 0; j < graph[i].size(); j++)
    //     {
    //         cout<<graph[i][j]<<" ";
    //     }
    //     cout << "\n";
        
    // }
    vector<int>vis(v+1);
    int cnt=0;
    for (int i = 1; i <=v; i++)
    {
        if(!vis[i]){
            BFS(i,vis);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
    
    
    return 0;
}
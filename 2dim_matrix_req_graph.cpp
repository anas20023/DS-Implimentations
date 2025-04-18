#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int graph[N][N];

int main(){
    int v,e;cin>>v>>e;
    memset(graph,0,sizeof(graph));
    for(int i=1;i<=e;i++){
        int v1,v2;cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

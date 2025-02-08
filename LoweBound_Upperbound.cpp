#include <bits/stdc++.h>
using namespace std;
int my_lowerbound(vector<int>v,int n,int x){
    int l=0,r=n-1;
    while (l<r)
    {
        int mid=(l+r)/2;
        if(v[mid]<x) l=mid+1;
        else r=mid;
    }
    //cout<<l<<" "<<r<<endl;
    return l;
    
}
int my_upperbound(vector<int>v,int n,int x){
    int l=0,r=n;
    while (l<r)
    {
        int mid=(l+r)/2;
        if(v[mid]<=x) l=mid+1;
        else r=mid;
    }
    //cout<<l<<" "<<r<<endl;
    return r;
    
}
int main()
{
    int n,x; cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int lb=my_lowerbound(v,n,x);
    int ub=my_upperbound(v,n,x);
    if(n==ub) cout<<"Value Not Found !"<<endl;
    else{
        cout<<"First Occurrence : "<<lb<<endl;
        cout<<"Last Occurrence : "<<ub-1<<endl;
    }
   // cout<<lb<<" "<<ub<<endl;
    return 0;
}
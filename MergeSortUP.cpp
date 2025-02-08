#include <bits/stdc++.h>
using namespace std;


int n;
vector<int>v(500005),ans(500005);

void Merge(int l,int r){

    int mid=(l+r)/2;
    int i1=l,i2=mid+1,j=l;

    while (i1<=mid &&i2<=r) 
    { 
        if(v[i1]<v[i2]){
            ans[j]=v[i1];
            i1++;
        }
        else{
            ans[j]=v[i2];
            i2++;
        }
        j++;
    }


    while(i1<=mid){
        ans[j]=v[i1];
        i1++;
        j++;
    }


    while(i2<=r){
        ans[j]=v[i2];
        i2++;
        j++;
    }
    
    for (int i = l; i <=r; i++)
    {
       v[i]=ans[i];
    }
    
    
}
void Mergesort(int l,int r){
    if(l==r) return;
    int mid=(l+r)/2;
    Mergesort(0,mid);
    Mergesort(mid+1,r);
    Merge(l,r);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>v[i];
    Mergesort(0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
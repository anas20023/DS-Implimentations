#include <bits/stdc++.h>
using namespace std;


int Divide(vector<int>& v, int l, int r){
    int pvt=v[r];
    int idx=l-1;
    for (int j = l; j < r; j++)
    {
        if(v[j]<=pvt){
            idx++;
            swap(v[j],v[idx]);
        }
    }
    swap(v[++idx],v[r]);
    return idx;
    
}

void QuickSort(vector<int>& v, int l,int r){
    if(l<r){
        int ptn=Divide(v,l,r);
         QuickSort(v,l,ptn-1);
         QuickSort(v,ptn+1,r);
    }
 }

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    QuickSort(v,0,n-1);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}
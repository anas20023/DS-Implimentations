#include<bits/stdc++.h>

using namespace std;
void BuildMaxHeap(vector<int>&v,int n, int i){
    int large=i;
    int l=2*i,r=2*i+1;
    if(l<=n && v[l]<v[large]){
        large=l;
    }
    if(r<=n &&v[r]<v[large]){
        large=r;
    }
    if(large!=i){
        swap(v[large],v[i]);
        BuildMaxHeap(v,n,large);
    }
}


void HeapSort(vector<int>&v,int n){
    for(int i=n/2;i>=1;i--){
        BuildMaxHeap(v,n,i);
    }
    for(int i=n;i>=2;i--){
        swap(v[i],v[1]);
        BuildMaxHeap(v,i-1,1);
    }
}

int main(){
    int n;cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];

    HeapSort(v,n);
    for(int i=1;i<=n;i++) cout<<v[i]<<" ";
}

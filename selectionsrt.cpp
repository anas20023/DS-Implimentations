#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>&v,int n){
    for (int i = 0; i < n-1; i++)
    {
        int minidx=i;
        for (int j = i+1; j <n; j++)
        {
            if(v[j]<v[i]){
                minidx=j;
            }
        }
        swap(v[i],v[minidx]);
        
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
    SelectionSort(v,n);
    for(auto i:v) cout<<i<<" ";
    return 0;
}
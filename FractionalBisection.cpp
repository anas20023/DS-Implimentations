#include <bits/stdc++.h>
using namespace std;
int n;
bool isOK(double x){
    if(x*x<n) return 0;
    else return 1;
}
int main()
{
    cin>>n;
    double l=0,r=n+1;
    while(r-l > 0.0000000001){  /// l < r dile INF loop hobe .... So, r-l >0.0000000001
        double mid=(l+r)/2;
        if(isOK(mid)==0) l=mid;
        else r=mid;
    }
    cout<<l<<endl;
    return 0;
}
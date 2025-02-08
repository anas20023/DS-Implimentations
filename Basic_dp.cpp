// Factorial Using DP
#include <bits/stdc++.h>
using namespace std;
vector<int>dp(2e5,-1); // memoiazation array

int factorial(int n){
    if(n==0) return 1;
    if(dp[n]==-1) return dp[n] =n*factorial(n-1);
    return dp[n];
}
int main()
{
    int n;cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
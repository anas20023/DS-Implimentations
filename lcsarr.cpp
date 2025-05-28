#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
int LCS(int n, int m, vector<int>&a, vector<int>&b){
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if(a[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
               // ans.push_back(dp[i][j]);
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
    }
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (a[i-1] == b[j-1]) {
            ans.push_back(a[i-1]); 
            i--; j--;
        }
        else if (dp[i-1][j] > dp[i][j-1]) {
            i--;
        } else {
            j--;
        }
    }

    reverse(ans.begin(), ans.end()); 
    return dp[n][m];
    
}
int main()
{
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    
    //cout<<
    int y=LCS(n,m,a,b);
    cout<<y<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int Knapsack(vector<pair<int, int>> &items, int n, int w)
{
    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));
    for (int i = 1; i <= n; ++i)
    {
        int wt = items[i - 1].first;
        int val = items[i - 1].second;

        for (int j = 0; j <= w; ++j)
        {
            if (wt <= j)
            {
                dp[i][j] = max(dp[i - 1][j], val + dp[i - 1][j - wt]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][w];
}
int main()
{
    int n, w;
    cin >> n >> w;
    vector<pair<int, int>> items(n);
    for (int i = 0; i < n; i++)
    {
        int wt, pr;
        cin >> wt >> pr;
        items[i] = {wt, pr};
    }
    int maxpr = Knapsack(items, n, w);
    cout << "Maximum Profit: " << maxpr << endl;
    return 0;
}
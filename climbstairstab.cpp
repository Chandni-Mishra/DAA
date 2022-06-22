#include<bits/stdc++.h>
using namespace std;
int climbstairs(int n,vector<int>&dp)
{
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
    int n;
    cout << "Enter value of n\n";
    cin >> n;
    vector<int>dp(n+1);
    cout << "Number of steps are:" << climbstairs(n,dp);
}

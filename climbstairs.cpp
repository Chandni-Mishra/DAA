#include<bits/stdc++.h>
using namespace std;
int climbstairs(int n,vector<int>&dp)
{
    if(n == 0)
    {
        return 1;
    }
    if(n == 1)
    {
         return 1;
    }
    if(dp[n] != 0)
    {
        return dp[n];
    }
    return(dp[n] = climbstairs(n-1,dp)+climbstairs(n-2,dp));
}
int main()
{
    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    vector<int>dp(n+1);
    cout << climbstairs(n,dp);
}

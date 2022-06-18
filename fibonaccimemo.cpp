#include<bits/stdc++.h>
using namespace std;
int fib(int n,int dp[])
{
    if(n <= 1)
    {
     return n;
    }
    if(dp[n]!=-1)
    {
     return dp[n];
    }
    return dp[n]=fib(n-1,dp)+fib(n-2,dp);
}
int main()
{
    int n;
    cout << "Emter value of n:-";
    cin >> n;
    int dp[n+1];
    for(int i=0;i<n+1;i++)
    {
        dp[i] = -1;
    }
    
    cout << "Answer:" << fib(n,dp);
}

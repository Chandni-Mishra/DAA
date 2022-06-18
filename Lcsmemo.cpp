//using memoization
#include<bits/stdc++.h>
using namespace std;
int lcs(int n,int m,string s1,string s2)
{
    int dp[n+1][m+1];
   for(int i=0;i<n+1;i++)
   {
    for(int j=0;j<m+1;j++)
    {
        dp[i][j] = -1;
    }
   }
    if(n==0 || m==0)
    {
        return 0;
    }
    if(dp[n][m] != -1)
    {
        return dp[n][m];
    }
    if(s1[n-1] == s2[m-1])
    {
        return dp[n][m] = 1+lcs(n-1,m-1,s1,s2);
    }
    int left = lcs(n,m-1,s1,s2);
    int right = lcs(n-1,m,s1,s2);
    return dp[n][m] = max(left,right);
}
int main()
{
    string s1,s2;
    cout << "Enter the first string\n";
    cin >> s1;
    cout << "Enter second string\n";
    cin >> s2;
    int n = s1.length();
    int m = s2.length();
    int k = lcs(n,m,s1,s2);
    cout << "Length of lcs is :" << k << endl;
}

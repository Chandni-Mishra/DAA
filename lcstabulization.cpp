//using tabulation
#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2,int n,int m)
{
    int dp[n][m];
    if(n==0 || m==0)
    {
        return 0;
    }
    for(int j=0;j<=m;j++)
    {
        dp[0][j] = 0;
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0] = 0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                dp[i][j] = 1+dp[i-1][j-1];
           }
           else
           {
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
           }
        }
    }
    return dp[n][m];
}
int main()
{
    string s1;
    string s2;
    cout << "Enter the first string\n";
    cin >> s1;
    cout << "Enter the second string\n";
    cin >> s2;
    int n = s2.length();
    int m = s2.length();
    int k = lcs(s1,s2,n,m);
    cout << "length:" << k << endl;
}

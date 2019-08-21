#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll lcs(string s1, string s2, ll n, ll m)
{
  ll dp[n+1][m+1];
  ll ans = 0;
  for(int i=0;i<=n;i++)
  {
   for(int j=0;j<=m;j++)
    {
      if(i==0||j==0)
       dp[i][j] = 0;
       
      else if(s1[i-1]==s2[j-1])
       {
         dp[i][j] = 1 + dp[i-1][j-1];
         ans = max(ans,dp[i][j]);
       }
      else
        dp[i][j] = 0;
    }
  }
  return ans;
}
int main()
{
  ll t,n,m;
  string s1,s2;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    cin>>s1>>s2;
    cout<<lcs(s1,s2,n,m)<<endl;
  }
}
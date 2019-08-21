#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll minedits(string s1,string s2)
{
  ll n = s1.length();
  ll m = s2.length();
  ll dp[n+1][m+1];
  for(int i=0;i<=m;i++)
   dp[0][i] = i;
  for(int i=0;i<=n;i++)
   dp[i][0] = i;
  
  for(int i=1;i<=n;i++)
  {
   for(int j=1;j<=m;j++)
   {
     if(s1[i-1] == s2[j-1])
      dp[i][j] = dp[i-1][j-1];
     else
      dp[i][j] = 1 + min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
   }
  }
  return dp[n][m];
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
    cout<<minedits(s1,s2)<<endl;
  }
}
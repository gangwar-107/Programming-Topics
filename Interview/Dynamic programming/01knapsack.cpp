#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll ks(ll pr[], ll it[], ll n, ll wt)
{
  ll dp[n+1][wt+1];
  
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=wt;j++)
    {
      if(i==0||j==0)
       dp[i][j] = 0;
      else if(j>=it[i-1])
      dp[i][j] = max(pr[i-1]+dp[i-1][j-it[i-1]],dp[i-1][j]);
      else
      dp[i][j] = dp[i-1][j];
    }
  }
  return dp[n][wt];
}

int main()
{
  ll t,n,wt;
  cin>>t;
  while(t--)
  {
    cin>>n;
    cin>>wt;
    ll pr[n+1];
    ll it[n+1];
    for(int i=0;i<n;i++)
     cin>>pr[i];
    for(int i=0;i<n;i++)
     cin>>it[i];
    cout<<ks(pr,it,n,wt)<<endl;
  }
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll ed(ll n, ll k)
{
  ll dp[n+1][k+1];
  for(int i=0;i<=n;i++)
   dp[0][i] = 0;
  for(int i=1;i<=n;i++)
  {
   dp[i][0] = 0;
   dp[i][1] = 1;
  }
  for(int i=1;i<=k;i++)
   dp[1][i] = i;
  ll ans;
  for(int i=2;i<=n;i++)
  {
    for(int j=2;j<=k;j++)
    {
      dp[i][j] = INT_MAX;
      for(int x=1;x<=j;x++)
      {
        ans = 1 + max(dp[i-1][x-1],dp[i][j-x]);
        if(ans<dp[i][j])
         dp[i][j] = ans;
      }
    }
  }
  return dp[n][k];
}

int main()
{
  ll n,k;
  cin>>n>>k;
  cout<<ed(n,k)<<endl;
}
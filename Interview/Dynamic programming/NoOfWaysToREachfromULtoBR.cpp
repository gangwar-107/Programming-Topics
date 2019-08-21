#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll ways(ll n,ll m)
{
  ll dp[n][m];
  for(int i=0;i<m;i++)
  	dp[0][i] = 1;
 for(int i=0;i<n;i++)
  	dp[i][0] = 1;

  for(int i=1;i<n;i++)
   for(int j=1;j<m;j++)
   	dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;

  return dp[n-1][m-1];
   
}

int main()
{
  ll n,m;
  cin>>n>>m;
  cout<<ways(n,m)<<endl;
}
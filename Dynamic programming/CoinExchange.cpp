#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll coin(ll c[],ll m, ll n)
{
  ll dp[m+1][n+1];
  memset(dp,0,sizeof(dp));
  // if coins are 0 to be selected
  for(int i=0;i<=m;i++)
  	dp[i][0] = 1;

  // if amount is zero
  for(int i=1;i<=n;i++)
  	dp[0][i] = 0;

  for(int i=1;i<=m;i++)
  {
  	for(int j=1;j<=n;j++)
  	{
  	  if(c[i-1]>j)
  	  	dp[i][j] = dp[i-1][j];
  	  else
  	  	dp[i][j] = dp[i-1][j] + dp[i][j-c[i-1]];
  	}
  }
  return dp[m][n];
}

int main()
{
  ll n,m;
  cin>>m;
  ll a[m+1];
  for(int i=0;i<m;i++)
  	cin>>a[i];
  cin>>n;
  cout<<coin(a,m,n)<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 50 

ll msm(ll a[MAX][MAX],ll n, ll m)
{
  ll dp[n][m];
  for(int i=0;i<m;i++)
  	dp[0][i] = a[0][i];
  for(int i=0;i<n;i++)
  	dp[i][0] = a[i][0];
  
  for(int i=1;i<n;i++)
  {
    for(int j=1;j<m;j++)
    {
      if(a[i][j]==1)
      	dp[i][j] = 1 + max(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
      else
      	dp[i][j] = 0;
     }
  }
 
 ll ans = 0;
 for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  	ans = max(ans,dp[i][j]);
 return ans;
}

int main()
{
  ll n,m;
  cin>>n>>m;
  ll a[MAX][MAX];
  for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
   	 cin>>a[i][j];

  cout<<msm(a,n,m)<<endl;
}
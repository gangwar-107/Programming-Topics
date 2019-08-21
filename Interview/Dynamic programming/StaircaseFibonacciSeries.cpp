// Program to find number of ways to reach nth stair with m steps options(1 to m steps)
// Time complexity -->O(nm)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll ways(ll n, ll m)
{
 ll dp[n+1];
 dp[0] = dp[1] = 1;
 for(int i=2;i<=n;i++)
 {
 	dp[i] = 0;
   for(int j = 1;j<=m&&j<=i;j++)
   	dp[i] = (dp[i]+dp[i-j])%mod;
 }
   return dp[n];
}

int main()
{
  ll t,n,m;
  cin>>t>>m;
  while(t--)
  {
  	cin>>n;
  	cout<<ways(n,m)<<endl;
  }
}

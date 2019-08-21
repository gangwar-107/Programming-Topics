#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll rod(ll a[],ll n)
{
  ll dp[n+1];
  dp[0] = 0;
  for(int i=1;i<=n;i++)
  {
  	ll m = -1;
  	for(int j=0;j<i;j++)
  	{
  	  m = max(m, a[j] + dp[i-(j+1)]);
  	  dp[i] = m;
  	}
  }
   return dp[n];
}

int main()
{
 
  ll a[5] = { 2, 3, 7, 8, 9 };
  ll n;
  cin>>n;
  cout<<rod(a,n); 
}
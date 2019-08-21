#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll mst(ll a[], ll n)
{
  ll dp[n];
  if(n==0||a[0]==0)
  	return -1;
  for(int i=0;i<n;i++)
  	dp[i] = INT_MAX;
  dp[0] = 0;
  for(int i=1;i<n;i++)
  {
   for(int j=0;j<i;j++)
   {
   	 if(j+a[j]>=i)
   	  dp[i] = min(dp[i],1+dp[j]);
   }
  }
  if(dp[n-1]==INT_MAX)
  	return -1;
  return dp[n-1];
}

int main()
{
  ll n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
  cout<<mst(a,n)<<endl;
}
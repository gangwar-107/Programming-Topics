#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007

ll ways(ll n)
{
  ll dp[n+1];
  for(int i=0;i<=n;i++)
  {
     if(i<=2)
      dp[i] = i;
     else
      dp[i] = (dp[i-1] + (i-1)*dp[i-2])%M;
  }
  return dp[n];
}

int main()
{
  ll t,n;
  cin>>t;
  while(t--)
  {
     cin>>n;
     cout<<ways(n)<<endl;
  }
}
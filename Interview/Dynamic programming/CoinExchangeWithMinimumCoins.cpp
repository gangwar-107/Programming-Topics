#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// prints denominations of selected coins
void tcoins(ll den[],ll c[], ll n)
{
  ll st = n;
  while(st!=0)
  {
    cout<<c[den[st]]<<" ";
    st = st-c[den[st]];
  }
  cout<<endl;
} 


// returns no. of minimum coins to be selected
ll coin(ll c[], ll m, ll n)
{
  ll den[n+1];
  ll dp[n+1];
  dp[0] = 0;
  den[0] = -1;
  for(int i=1;i<=n;i++)
  {
  	dp[i] = INT_MAX;
  	den[i] = -1;
  }

  for(int i=0;i<m;i++)
  {
    for(int j=1;j<=n;j++)
    {
      if(j>=c[i])
      {
      	if(1+dp[j-c[i]]<dp[j])
      	{
      	  dp[j] = 1 + dp[j-c[i]];
      	  den[j] = i;
      	}
      }
    }
  }

  if(den[n]==-1)
  	return -1;
  tcoins(den,c,n);
  return dp[n]; 
}

int main()
{
  ll n,m;
  cin>>m>>n;
  ll a[m+1];
  for(int i=0;i<m;i++)
  	cin>>a[i];
  cout<<coin(a,m,n)<<endl;
}

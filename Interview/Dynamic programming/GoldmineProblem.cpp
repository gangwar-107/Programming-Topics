// Program to implement  goldman problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 21

ll goldmine(ll a[MAX][MAX], ll n, ll m)
{
    ll b[n][m];
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
      b[i][j] = 0;
    }
    
  for(int j = m-1;j>=0;j--)
  {
    for(int i=0;i<n;i++)
    {
      ll r = (j==m-1)?0:b[i][j+1];
      ll ru = (i==0||j==m-1)?0:b[i-1][j+1];
      ll rd = (i==n-1||j==m-1)?0:b[i+1][j+1];
      
      b[i][j] = a[i][j] + max(r,max(ru,rd));
    }
  }
  ll ans = 0;
  for(int i=0;i<n;i++)
     ans = max(ans,b[i][0]);
     
  return ans;
}

int main()
{
  ll t,n,m,x;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    ll a[MAX][MAX];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        cin>>a[i][j];
      }
    }

    cout<<goldmine(a,n,m)<<endl;
  }
}
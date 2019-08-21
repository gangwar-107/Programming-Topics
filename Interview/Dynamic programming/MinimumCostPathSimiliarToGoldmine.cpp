#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <string>
#define ll long long int
#define ull unsigned long long int
#define db long double
#define rep(i,p,q) for(i=p;i<q;++i)
#define REP(i,p,q) for(i=p;i<=q;++i)
#define MOD 1000000007
#define stop return 0
#define pb push_back
#define nil -1
#define initial 0
#define waiting 1
#define visited 2
#define inf 10e+9
#define pb push_back
#define mp make_pair
#define pr pair<ll,ll>
#define MAX2 2000005
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
using namespace std;
#define MAX 20

ll mc(ll a[MAX][MAX],ll n)
{
  ll dp[n][n];
  for(int i=0;i<n;i++)
    dp[0][i] = a[0][i];

  for(int i=1;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      ll dw = dp[i-1][j];
      ll dr = (j==0)?0:dp[i-1][j-1]; 
      ll dl = (j==n-1)?0:dp[i-1][j+1];
      dp[i][j] = a[i][j] + max(dw,max(dr,dl));
    }
  }
  ll ans = 0;
  for(int i=0;i<n;i++)
   ans = max(ans,dp[n-1][i]);

 return ans;
}

 int main()
 {
   ll n;
   cin>>n;
   ll a[MAX][MAX];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
      cin>>a[i][j];
   }
   cout<<mc(a,n)<<endl;
 }
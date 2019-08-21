// program to find the no. of ways to fill n*m board with 1*m tiles

#include<bits/stdc++.h>
using namespace std;

int ways(int n, int m)
{
 int dp[n+1];
 dp[0] = 0;
 for(int i = 0;i<=n;i++)
 {
 	if(i==m)
 	  dp[i] = 2;

 	if(i<=m)
 	  dp[i] = 1;

 	else
 	  dp[i] = dp[i-1] + dp[i-m];
 }
 return dp[n];
}

int main()
{
  int n,m;
  cin>>n>>m;
  cout<<ways(n,m)<<endl;
}
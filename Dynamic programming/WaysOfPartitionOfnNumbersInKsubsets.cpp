// Program to find the no. of ways to partiton N numbers into k subsets
// S(N,K) = K*S(N-1,K)+S(N-1,K-1)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define N 101
#define K 101
ll dp[N+1][K+1];

void precompute()
{
  
  for(int i=0;i<=N;i++)
  	dp[i][0] = 0;
  for(int i=0;i<=N;i++)
  	dp[0][i] = 0;
  for(int i=1;i<=N;i++)
  {
  	for(int j=1;j<=i;j++)
  	{
  	  if(i==1||i==j)
  	  	dp[i][j]= 1;
  	  else
  	  	dp[i][j] = j*dp[i-1][j] + dp[i-1][j-1];
  	} 
  }

}

int main()
{ 
  precompute();

  ll n,k;
  cin>>n>>k;
  cout<<dp[n][k]<<endl;
}

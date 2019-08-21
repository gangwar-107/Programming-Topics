// program to find the C(n,k)

#include<bits/stdc++.h>
using namespace std;
#define N 100
#define K 100
#define ll long long int
ll nck[N+1][K+1];

void precompute()
{
	for(int i=0;i<=N;i++)
	{
	  for(int j=0;j<=i;j++)
	  {
	  	if(j==0||j==i)
	  	  nck[i][j] = 1;
	  	else
	  	 nck[i][j] = nck[i-1][j-1]+nck[i-1][j];
	  }
	}
}

int main()
{
  precompute();
  ll n,k;
  cin>>n>>k;
  cout<<nck[n][k]<<endl;
}
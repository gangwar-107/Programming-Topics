// Program to find the no. of ways of partition N numbers. Or (Nth bell number)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 101
ll nbell[MAX+1][MAX+1];

void precompute()
{
  nbell[0][0] = 1;
  for(int i=1;i<=MAX;i++)
  {
  	nbell[i][0] = nbell[i-1][i-1];
  	for(int j=1;j<=i;j++)
       nbell[i][j] = nbell[i-1][j-1] + nbell[i][j-1];
  }
}

int main()
{
  precompute();
  ll n;
  cin>>n;
  cout<<nbell[n][0]<<endl;
}
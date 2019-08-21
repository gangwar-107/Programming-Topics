#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int lis(int a[],int n)
{
  int dp[n];
  for(int i=0;i<n;i++)
   dp[i] = 1;
  for(int i=1;i<n;i++)
  { 
   for(int j=0;j<i;j++)
   {
     if(a[i]>a[j])
      dp[i] = max(dp[i],1+dp[j]);
   }
  }
  return *max_element(dp,dp+n);
}

int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    cout<<lis(a,n);
  }
}
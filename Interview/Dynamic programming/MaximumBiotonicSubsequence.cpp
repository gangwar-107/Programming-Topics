#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll mbs(ll a[], ll n)
{
  ll dp1[n],dp2[n];
  for(int i=0;i<n;i++)
  {
    dp1[i] = 1;
    dp2[i] = 1;
  }
  
 for(int i=1;i<n;i++)
 {
   for(int j=0;j<i;j++)
   {
     if(a[i]>a[j])
     dp1[i] = max(dp1[i],1+dp1[j]);
   }
 }
 
 for(int i=n-2;i>=0;i--)
 {
   for(int j=n-1;j>i;j--)
   {
      if(a[i]>a[j])
       dp2[i] = max(dp2[i],1+dp2[j]);
   }
 }
 ll ans = 1;
  for(int i=0;i<n;i++)
   ans = max(ans,dp1[i]+dp2[i]);
 return ans-1;
}

int main()
{ 
  ll t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    
    cout<<mbs(a,n)<<endl;
  }
}
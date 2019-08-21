#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll mss(ll a[], ll n)
{
  ll inc,exc,oex,oin;
  inc = a[0];
  exc = 0;
  for(int i=1;i<n;i++)
  {
    oin = inc;
    oex = exc;
    inc = a[i] + oex;
    exc = max(oin,oex);
  }
  return max(inc,exc);
}

int main()
{
 ll n;
 cin>>n;
 ll a[n];
 for(int i=0;i<n;i++)
  cin>>a[i];
 cout<<mss(a,n)<<endl;
}
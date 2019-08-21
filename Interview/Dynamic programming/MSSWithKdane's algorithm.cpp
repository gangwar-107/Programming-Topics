#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


void mss(ll a[], ll n)
{
  ll msf,meh,st,ed,s;
  msf = INT_MIN;meh=0;
  st = ed = s = 0;
  for(int i=0;i<n;i++)
  {
    meh += a[i];
    if(msf<meh)
    {
      msf = meh;
      st = s;
      ed = i;
    }
    if(meh<0)
    {
      meh = 0;
      s = i+1;
    }
  }
  cout<<st<<" "<<ed<<" "<<msf<<endl;
}

int main()
{
  ll n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)
  	cin>>a[i];
  mss(a,n);
}
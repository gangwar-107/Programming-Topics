#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define max 10000000
#define pb push_back
vector<ll> p;
vector<ll> t;


void twin()
{
  for(int i=2;i<=max-2;i++)
  {
     if(p[i]==true&&p[i+2]==true)
      {
         t.pb(i+2);
        // cout<<i+2<<endl;
      }
  }
}

void pre()
{
  for(int i=0;i<=max;i++)
    p[i] = true;
  p[0] = p[1] = false;
  for(int i=0;i*i<=max;i++)
  {
    if(p[i] == true)
    {
      for(int j=i*i;j<=max;j+=i)
       p[j] = false;
    }
  }
}

int main()
{
  //cout<<"hello"<<endl;
  pre();
  twin();
  
  ll t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    //cout<<t[1]<<endl;
    ll ans = upper_bound(t.begin(),t.end(),n) - t.begin();
    cout<<ans<<endl;
  }
}
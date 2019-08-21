#include<bits/stdc++.h>
using namespace std;
#define ll long long int


struct job
{
  int id,dl,pr;
};

bool cmp(job j1, job j2)
{
  return j1.pr>j2.pr;
}

pair<ll,ll> mpr(job a[],ll n)
{
 ll ans=0;
 pair<ll,ll> p;
  ll count = 0;
  ll slot[n] = {0};
  for(int i=0;i<n;i++)
  {
      ll p = a[i].dl;
    for(int j = min(n,p)-1;j>=0;j--)
    {
      if(slot[j]==0)
       {
         ans += a[i].pr;
         slot[j] = 1;
         count++;
         break;
       }
    }
  }
  return {count,ans};
}

int main()
{
   ll t,n,x,y,z;
   cin>>t;
   while(t--)
   {
     cin>>n;
     job a[n];
     for(int i=0;i<n;i++)
      cin>>a[i].id>>a[i].dl>>a[i].pr;
     sort(a,a+n,cmp);
     pair<ll,ll> ans = mpr(a,n);
     cout<<ans.first<<" "<<ans.second<<endl;
   }
}
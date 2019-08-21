#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct job
{
  int st,ed,pr;
};


bool cmp(job s1, job s2)
{
	return s1.ed<s2.ed;
}
 
ll ncj(job js[], ll j)
{
  for(int i = j-1;i>=0;i--)
  {
    if(js[i].ed<=js[j].st)
    	return i;
  }
  return -1; 
}

ll mpr(job js[], ll n)
{
   
   ll dp[n];
   dp[0] = js[0].pr;

   for(int i=1;i<n;i++)
   {
     ll ans = js[i].pr;
     ll l = ncj(js,i);
     if(l!=-1)
     	ans += dp[l];

     dp[i] = max(dp[i-1],ans);
   }
   return dp[n-1];
}

int main()
{
  ll n,x,y,z;
  cin>>n;
  job js[n];
  for(int i=0;i<n;i++)
     cin>>js[i].st>>js[i].ed>>js[i].pr;
  sort(js,js+n,cmp);

  cout<<mpr(js,n)<<endl;
}
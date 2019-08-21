#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll R,C;

ll kdane(ll a[])
{
  ll msf,meh;
  meh=0;msf=INT_MIN;
  for(int i=0;i<R;i++)
  {
    meh += a[i];
    if(msf<meh)
     msf = meh;
    if(meh<0)
     meh = 0;
  }
  return msf;
}


int main()
{
  cin>>R>>C;
  ll a[R][C];
  for(int i=0;i<R;i++)
  	for(int j=0;j<C;j++)
  		cin>>a[i][j];
  
  ll maxsum = INT_MIN;
  for(int i=0;i<C;i++)
  {
  	ll arr[R];
  	memset(arr,0,sizeof(arr));
  	for(int j=i;j<C;j++)
  	{
  	  for(int k=0;k<R;k++)
  	  	arr[k] += a[k][j];

  	  maxsum = max(maxsum,kdane(arr));
  	}
  }
  cout<<maxsum<<endl;
}
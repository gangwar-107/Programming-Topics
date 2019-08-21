#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll findcost(ll arr[],ll n)
{
  int temp[n][n]; 
  for(int i=0;i<n;i++)
  {
     for(int j=0;j<n;j++)
     temp[i][j] = 0;
  }
   int q = 0;
        for(int l=2; l < n; l++){
            for(int i=0; i < n - l; i++){
                int j = i + l;
                temp[i][j] = INT_MAX;
                for(int k=i+1; k < j; k++){
                    q = temp[i][k] + temp[k][j] + arr[i]*arr[k]*arr[j];
                    if(q < temp[i][j]){
                        temp[i][j] = q;
                    }
                }
            }
        }
        return temp[0][n-1];
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
    cout<<findcost(a,n)<<endl;
  }
}
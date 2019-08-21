#define M 1000000007

ll ssum(ll a[],ll m, ll n)
{
  bool dp[m+1][n+1];
  for(int i=0;i<=m;i++)
   dp[i][0] = 1;
  for(int i=1;i<=n;i++)
   dp[0][i]=0;
   
   for(int i=1;i<=m;i++)
   {
    for(int j=1;j<=n;j++)
    {
      if(j<a[i-1])
       dp[i][j] = dp[i-1][j];
      else
      {
         dp[i][j] = dp[i-1][j]||dp[i-1][j-a[i-1]];
      }
      // dp[i][j] = ( || d[i-1][j-a[i-1]])?1:0;
    }
   }
   return dp[m][n];
}

int main()
{
  ll t,n,sum;
  cin>>t;
  while(t--)
  {
    cin>>n;
    sum = 0;
    ll a[n+1];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      sum += a[i];
    }
    if(sum%2==1)
     cout<<"NO"<<endl;
    else if(ssum(a,n,sum/2)==1)
     cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl;
  }
}
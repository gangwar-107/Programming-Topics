#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll lps(string str)
{
  ll n = str.length();
  ll dp[n][n];
  for(int i=0;i<n;i++)
  	dp[i][i] = 1;
  
  for(int l = 2;l<=n;l++)
  {
   for(int i=0;i<n-l+1;i++)
   {
   	 int j = i+l-1;
   	 if(l==2&&str[i]==str[j])
   	 	dp[i][j] = 2;
   	 else if(str[i]==str[j])
   	 	dp[i][j] = 2 + dp[i+1][j-1];
   	 else 
   	 	dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
   }
  }
  return dp[0][n-1];
}

int main()
{
  string str;
  cin>>str;
  cout<<lps(str)<<endl;
}
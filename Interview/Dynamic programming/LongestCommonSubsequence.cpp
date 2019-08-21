#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll csub(string s1, string s2)
{
  ll dp[s1.length()+1][s2.length()+1];
  for(int i=0;i<=s1.length();i++)
  {
   for(int j=0;j<=s2.length();j++)
   {
     if(i==0||j==0)
      dp[i][j] = 0;
     else if(s1[i-1]==s2[j-1])
      dp[i][j] = 1 + dp[i-1][j-1];
     else
      dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
   }
  }
  return dp[s1.length()][s2.length()];
}

int main()
{
  ll t,m,n;
  cin>>t;
  string s1,s2;
  while(t--)
  {
    cin>>m>>n;
    cin>>s1>>s2;
    cout<<csub(s1,s2)<<endl;
  }
}
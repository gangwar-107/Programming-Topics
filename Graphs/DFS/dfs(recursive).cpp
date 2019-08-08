// recursive Approach of DFS
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<bool> vis;
vector<vector<int>> g;

void edge(int x, int y)
{
   g[x].pb(y);
   g[y].pb(x); 
}

void dfs(int s)
{
 
  vis[s] = true;
  cout<<s<<" ";
  for(auto i = g[s].begin();i!=g[s].end();i++)
  {
  	if(!vis[*i])
  	 dfs(*i);
  }
}

int main()
{
  int nd,eg,x,y;
  cin>>nd>>eg;
  
  vis.assign(nd+1,false);
  g.assign(nd+1,vector<int>());

  for(int i=0;i<eg;i++)
  {
  	cin>>x>>y;
  	edge(x,y);
  }

  for(int i=1;i<=nd;i++)
  {
  	if(!vis[i])
  		dfs(i);
  }
}
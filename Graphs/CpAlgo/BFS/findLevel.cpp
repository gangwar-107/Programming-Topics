// Program to find the level of the nodes in the tree
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<bool> vis;
vector<int> level;
vector<vector<int>> g;

void edge(int x,int y)
{
	g[x].pb(y);
	// undirected graph
	// g[y].pb(x);
}

void bfs(int s)
{
  queue<int> q;
  q.push(s);
  level[s] = 0;
  vis[s] = true;

  while(!q.empty())
  {
  	 int f = q.front();
  	 q.pop();
  	 for(auto i = g[f].begin();i!=g[f].end();i++)
  	 {
  	 	if(!vis[*i])
  	 	{
  	 	  level[*i] = level[f]+1;
  	 	  q.push(*i);
  	 	  vis[*i] = true;
  	 	}
  	 }
  }
}

int main()
{
  int nd,eg,x,y;
  cin>>nd>>eg;
  vis.assign(nd,false);
  level.assign(nd,0);
  g.assign(nd,vector<int>());

  for(int i=0;i<eg;i++)
  {
  	 cin>>x>>y;
  	 edge(x,y);
  }

  for(int i=0;i<nd;i++)
  {
  	if(!vis[i])
  	 bfs(i);
  }
  for(int i=0;i<level.size();i++)
  {
  	cout<<i<<"\t"<<level[i]<<endl;
  }
}
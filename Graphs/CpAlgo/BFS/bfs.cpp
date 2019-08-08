// BFS CODE
// TIME COMPLEXITY-> O(V+E)
#include<bits/stdc++.h>
using namespace std;
#define pb push_back


vector<bool> vis;
vector<vector<int>> g;


void edge(int a, int b)
{
	g[a].pb(b);
	// if undirected graph
	// g[b].pb(a);
}

void bfs(int s)
{
  
  queue<int> q;
  q.push(s);

  vis[s] = true;
  while(!q.empty())
  {
     
    int f = q.front();
    cout<<f<<" ";
    q.pop();
    for(auto i:g[f])
    {
    	if(!vis[i])
    	{
    	  q.push(i);
    	  vis[i] = true;
    	}
    }
  }
}

int main()
{
	// node start form 0 to n-1
	int nd,eg,x,y;
	cin>>nd>>eg;
	vis.assign(nd,false);
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
}
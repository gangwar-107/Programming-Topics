// Iterative implementatin of DFS algorithm
// Find the connected compnents in the graph
// Time Complexity O(V+E)
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<bool> vis;
vector<vector<int>> g;

void edge(int x,int y)
{
  g[x].pb(y);
  g[y].pb(x);
}

void dfs(int s)
{
   stack<int> st;
   st.push(s);
   vis[s] = true;
   while(!st.empty())
   {
   	 int f = st.top();
   	 cout<<f<<" ";
     st.pop();
     for(auto i=g[f].begin();i!=g[f].end();i++)
     {
     	if(!vis[*i])
     	{
     	  st.push(*i);
     	  vis[*i] = true;
     	}
     }
   }	

}

int main()
{
   int nd,eg,x,y,count=0;
   cin>>nd>>eg;
   vis.assign(nd+1,false);
   g.assign(nd+1,vector<int>());

   for(int i=0;i<eg;i++)
   {
   	cin>>x>>y;
   	edge(x,y);
   }
  // nodes started from 1 to nd 
  for(int i=1;i<=nd;i++)
  {
  	 if(!vis[i])
  	 {
  	 	dfs(i);
  	 	count++;
  	 }
  	 
  }
  cout<<endl;
  cout<<count<<endl;
}
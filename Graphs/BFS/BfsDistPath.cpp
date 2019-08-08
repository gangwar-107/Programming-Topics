// Program which contains BFS,LEVEL OF NODES.
// Distance B/w starting and ending nodes
// find the predecessors of each node
// Find the shortest path b/w starting node and ending node
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

vector<bool> vis;
vector<vector<int>> g;
vector<int> dist;
vector<int> pred;
vector<int> res;

void edge(int x,int y)
{
    g[x].pb(y);
    g[y].pb(x);
}

void bfs(int s)
{
  queue<int> q;
  q.push(s);
  dist[s]=0;
  pred[s] = -1;
  vis[s] = true;
  while(!q.empty())
  {
    int p = q.front();
    q.pop();
    for(int u : g[p])
    {
        if(!vis[u])
        {
          q.push(u);
          vis[u] = true;
          dist[u] = dist[p]+1;
          pred[u] = p;
        }
    }
  }
}

int main()
{
    int nd,eg,t,x,y,count,s,d,u;
    cin>>t;
    while(t--)
    {
        cin>>nd>>eg;
        vis.assign(nd+1,false);
        dist.assign(nd+1,0);
        pred.assign(nd+1,-1);
        res.assign(nd+1,0);
        g.assign(nd+1,vector<int>());

        for(int i=0;i<eg;i++) 
         {
            cin>>x>>y;
            edge(x,y);
         }
         cin>>s>>d;
         bfs(s);
         cout<<dist[d]<<endl;
         count=0;
         while(d!=-1)
         {
           count++;
           res.push_back(d);
           u = pred[d];
           d = u;
         }
         reverse(res.begin(),res.end());
         cout<<s<<" ";
         for(int i=0;i<res.size();i++)
            cout<<res[i]<<" ";
         
    }
}
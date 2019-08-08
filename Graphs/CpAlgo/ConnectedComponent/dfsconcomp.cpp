#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <string>
#define ll long long int
#define ull unsigned long long int
#define db long double
#define rep(i,p,q) for(i=p;i<q;++i)
#define REP(i,p,q) for(i=p;i<=q;++i)
#define MOD 1000000007
#define stop return 0
#define pb push_back
#define nil -1
#define initial 0
#define waiting 1
#define visited 2
#define inf 10e+9
#define pb push_back
#define mp make_pair
#define pr pair<ll,ll>
#define MAX 300005
#define MAX2 2000005
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
using namespace std;

int n,cnt=0,m;
vector<int> g[MAX];
vector<int> cmp;
bool vis[MAX];

void dfs(int s)
{
	vis[s] = true;
	cmp.pb(s);
	for (int i=0;i<g[s].size();i++)
	{
	  int p = g[s][i];
	  if(!vis[p])
	  	dfs(p);
	}
}

void comp()
{
	for(int i=0;i<=n;i++)
	 vis[i] = false;

    int ct = 1;
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
		  cmp.clear();
		  dfs(i);
		  cnt++;
		  cout<<"comp "<<ct++<<": ";
		  for(int i=0;i<cmp.size();i++)
		  	cout<<cmp[i]<<" ";
		  cout<<endl;
		}
	}
}

int main()
{
	ll x,y;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
	}
	comp();
	cout<<"Total Component: "<<cnt<<endl;
}
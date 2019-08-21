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

ll parent[100005],ans=1;
   map<ll,ll> size;
   void make_set(int v)
   {
     parent[v] = v;
     size[v] = 1;
   }

   int find_set(int v)
   {
     if(v==parent[v])
      return v;
     else
      return parent[v] = find_set(parent[v]);
   }

   void uni(int a,int b)
   {
     a = find_set(a);
     b = find_set(b);
     if(a!=b)
     {
       if(size[b]>size[a])
        swap(a,b);
      parent[b] = a;
      size[a] += size[b];
     }
   }
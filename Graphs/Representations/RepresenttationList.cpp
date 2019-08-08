// Grpah Representation using Adjacency list:
// Space Complexity is O(V+E)

#include<bits/stdc++.h>
using namespace std;



int main()
{
	int eg,nd,x,y;
	cin>>nd>>eg;
	vector<int> v[nd+1];
	for(int i =0;i<eg;i++)
	{
		cin>>x>>y;
		v[x].push_back(y);
	//  v[y].push_back(x); for undirected graph
	}
  for(int i = 1;i<=nd;i++)
  {
  	cout<<i<<": ";
  	for(int j=0;j<v[i].size();j++)
  		cout<<v[i][j]<<" ";
  	cout<<endl;
  }
}
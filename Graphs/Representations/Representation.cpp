// Graph representation using Adjacency Matrix:
// Time complexity O(1)
// Space complexity O(V^2) v is the number of vertex

#include<bits/stdc++.h>
using namespace std;

int grp[5][5];
void initialize()
 {
   for(int i = 0;i<5;i++)
   {
   	 for(int j =0;j<5;j++)
   	 	grp[i][j] = 0;
   }
 }

int main()
{
	int nd,eg,x,y;
    cin>>nd>>eg;
    for(int i = 0;i<eg;i++)
    {
    	cin>>x>>y;
    	grp[x][y]=1;
    }

   for(int i = 0;i<5;i++)
   {
   	 for(int j =0;j<5;j++)
   	 	cout<<grp[i][j];
   	 cout<<endl;
   }
} 
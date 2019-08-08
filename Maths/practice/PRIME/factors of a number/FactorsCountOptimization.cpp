/* Count the number of factors of a number in O(n.log(n))
and the factors of all numbers less then n.
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> sf[n+1];
   for(int i = 1;i<=n;i++)
   {
   	for(int j = i;j<=n;j+=i)
   		sf[j].push_back(i);
   }
   
   for(int i=0;i<=n;i++)
   {
     for(int j=0;j<sf[i].size();j++)
       cout<<sf[i][j]<<" ";
     cout<<endl;
   }
   
}

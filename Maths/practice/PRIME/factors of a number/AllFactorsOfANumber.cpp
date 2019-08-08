/*
Since all fctors of a number comes into pairs they are called co-factors
if a = n/b, then a*b = n
36 = {1,36} {2,18} {3,12} {4,9} {6,6}

algo 1--> list ={1,n}

for(int i = 2; i*i<=n; i++)
  i,n/i

A number has no factor greater then n/2 except itself.
alog 2-->  list = {1,n}
for(int i=2, i<=n/2, i++)

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

 int n;
 cout<<"Enter a number:";
 cin>>n;
 cout<<1<<" ";

 for (int i = 2; i*i<=n; i++)
 {
  if(i == n/i)
  	cout<<i<<" ";
  else if(n%i==0)
  	{
  	 cout<<i<<" ";
     cout<<n/i<<" ";
  	}
 }
 cout<<n;
}
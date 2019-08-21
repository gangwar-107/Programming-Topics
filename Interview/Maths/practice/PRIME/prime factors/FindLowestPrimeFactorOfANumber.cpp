
/* find the lowest prime factor of a number that divides n but it should less then n.

we will put the lowest prime factor at all the multiple of a number like put 2 at(2,4,6,8...)

Time complexity-->O(N.sqrt(N))
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int prime[n+1];
	prime[0] = prime[1] = 0;
	for(int i = 2;i<=n;i++)
		prime[i] = 1;

	for (int i = 2;i<=sqrt(n);i++)
	{
       if(prime[i] == 1)
       {
       	for (int j = 2; i*j<=n; j++)
       	{
       	    prime[i*j] = 0;
       	}
       }
	}

  for(int i=2; i<=n;i++)
  {
  	if(n%i == 0 && prime[i] == 1)
  	{
         cout<<i<<endl;
         break;
  	}
  }
}
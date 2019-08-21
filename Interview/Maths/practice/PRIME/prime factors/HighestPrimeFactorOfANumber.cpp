/* Find the Highest prime factor of a number that divides n less then n;

TimeComplexity-->O(N.sqrt(N)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin>>n;

  int prime[n+1];

  for (int i = 0;i<=n;i++)
    prime[i] = 1;
  prime[0] = prime[1] = 0;
  for(int i = 2; i<=sqrt(n); i++)
  {
  	if(prime[i] == 1)
  	{
  		for (int j = 2; i*j<=n; j++)
  			prime[i*j] = 0;
  	}
  }

  for(int i = n;i>=2;i--)
  {
  	if(n%i == 0 && prime[i] == 1)
  		{
  			cout<<i<<endl;
  			break;
  		}

  } 
 
  
}
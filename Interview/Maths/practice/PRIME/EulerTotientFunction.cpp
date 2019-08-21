/* Eule totient function find all integers which are relatively prime to given number:

Two numbers are reltively prime or co-primes if GCD(A,B) = 1

Time Complexity--> O(√n)

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin>>n;
  int phi = n;
  for(int i = 2;i*i<=n;i++)
  {
  	if(n%i == 0)
  	{
  	  while(n%i==0)
  	  	n = n/i;
  	  phi = phi - phi/i;
  	}
  }
  if(n>1)
  	phi -= phi/n;

  cout<<phi;
}
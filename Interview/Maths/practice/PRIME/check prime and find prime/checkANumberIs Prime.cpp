/* --- Explanation---

if we don't find a factor till √n then the number is prime
since if n is divisible by a then b is a number iid a*b = n then a,b are cofactors
36 = {1,36} {1,18} {3,12} {4,9} {6,6}

if a = b then a*a = n --> a = sqrt(n) so we have to take the loop only for sqrt(n)

n = 15 

In this method initially we take all numbers prime less then n.
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

only 2,3,5,7,11,13 have no factor till √these numbers


*/
#include<bits/stdc++.h>
using  namespace std;

int main()
{
  int n;
  bool flag = false;
  cout<<"Enter a number:";
  cin>>n;
  if(n==1|| n==0)
  {
  	cout<<"Not a prime.";
  }
  
  else
  {
  	for (int i = 2; i*i <= n; i++)
  {
  	if(n%i==0)
  	 {
  	   cout<<"Not a prime number.";
  	   flag = true;
  	   break;
  	 }
  }
  if(flag==false)
  {
    cout<<"is a prime.";
  }
  }
}
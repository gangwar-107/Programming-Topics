
/*  METHOD - 1
if we don't find a factor till √n then the number is prime
 Time Complexity --> O(n.√n)
*/

#include<bits/stdc++.h>
using namespace std;


int isPrime(int n)
{
  
  for (int i = 2; i <= sqrt(n); i++)
  {
     
   if(n%i == 0)
    return 0;
  }

  	return 1;
  
}

//Driver function
int main()
{
  
  int n;
  cout<<"Enter a number:";
  cin>>n;

  for (int i=2;i<=n;i++)
  {
  	 if(isPrime(i))
  	  cout<<i<<" ";
  }
   return 0;
}
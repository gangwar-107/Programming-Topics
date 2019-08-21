
/* In euclidian for gcd we actually go the process untill divisor != 0 
we make--->
 remainder = dividend % divisor
 dividend = divisor
 divisor = remainder

 Time complexity O(log max(a,b))

*/

#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    int dividend = a>=b?a:b;
    int divisor = a<=b?a:b;
    while(divisor!=0)
    {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }

    return dividend;
}

int main(int argc, char const *argv[])
{
  int a,b;
  cout<<"Enter 2 numbers:";
  cin>>a>>b;  

  cout<<GCD(a,b);
}
/* We can actually convert GCD(A,B) in a equation like below:

GCD(A,B) = AX + BY

where X, Y are coefficients if we find these co-efficients then gcd can be found.

(A.B)%M = 1 then B is the modulo multiplicative inverse of A under modulo M.

Inverse possible if A and M are Co-Primes means GCD(A,M) = 1
AX + MY = 1

B lies in the interval [1, M-1]

So with this algorithm we can find the multiplicative inverse.

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

int d,x,y;
 vector<int> exEuclidian(ll A, ll B)
{

  if(B == 0)
  {
  	d = A;
  	x = 1;
  	y = 0;
  }

  else
  {

   exEuclidian(B,A%B);
   ll temp = x;
   x = y;
   y = temp - (A/B)*y;

  }

vector<int> v;
v.push_back(d);
v.push_back(x);
v.push_back(y);

 return v; 
}

int main()
{
	int A,B;
	cin>>A>>B;
    vector<int> v = exEuclidian(A,B);
	
 cout<<"GCD = "<<v[0]<<endl;
 cout<<"X = "<<v[1]<<" "<<"Y = "<<v[2]<<endl;
}
/*  pow(x,n) since pow(2,100) is very large number. It exceedes 10^18 and the power.So we have to take the modulo by MOD 
where MOD = 10^9 + 7 = 1000000007

-->O(N) is naive approch to find x^n by n iteration :
-->O(log(N))-->is optimized approach:
in second approach we will apply two operations:
1--> If n%2 == 0 (n is even) then divide n by 2 (n = n/2) and x is multiplies by x-->

  x^n = (x^2)^(n/2)

2--> If n%2 == 1 (n is odd) then convert x^n = x . x^(n-1) [now n will become even apply above formula]

Apply these two operations until n became 0
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define MOD 1000000007


ll NpowerX(ll x, ll n)
{
 ll result = 1;
 while(n>0)
 {
 	if(n%2 == 1)
 		result = (result*x)%MOD;

 	x = (x*x)%MOD;
 	n /= 2;
 }

 return result;
}

int main()
{

	 ll x,n;
	 cin>>x>>n;

	 cout<<(NpowerX(x,n));
}

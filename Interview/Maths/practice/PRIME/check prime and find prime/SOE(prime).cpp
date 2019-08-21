/* METHOD --> 2 (SOE)
Time Complexity --> O(n.log.log(n))
# if we don't find a factor of a number till √number then the number is prime.
n = 15 

In this method initially we take all numbers as prime that are less then n.
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

algo 1 --> cut all numbers which are multiple of a number in this range remaining numbers will be the prime numbers.
algo 2-->we will take all numbers from last and check wheter there is any factor of this number till √n.

only 2,3,5,7,11,13 have no factor till √these numbers

we can find till 10^12 whether it is prime or not.
because loop can run for 10^6 time so. O(sqrt(n))  10 ^12 can be checked.
*/
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
  int a[100000];
  for(int j = 0;j<100000;j++)
    a[j] = 1;
  a[0] = a[1] = 0;

  for(int i = 2;i*i<100000;i++)
  {
    if(a[i] == 1)
     for(int j = i*i;j<100000;j+=i)
      {
        a[j] = 0;
      }
  }
  for(int j = 0;j<100000;j++)
  {
    if(a[j] == 1)
    {
      cout<<j<<" ";
    }
  }
  
}
 


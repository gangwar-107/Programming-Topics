#include<bits/stdc++.h>
using namespace std;

int main()
{

  int n,rem,count;
  int a[100] = {0};
  cout<<"Enter a number: ";
  cin>>n;
  count = 0;
  while(n>0)
  {
      rem = n%2;
      n = n/2;
      a[count] = rem;
      count++;  
  }
  for (int i = count-1;i>=0;i--)
     cout<<a[i];
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
	  cin>>n;
       if(n == 1)
       	{
       	  cout<<0<<endl;
       	  continue;
       	}
       	if(n == 2)
       	{
       	  cout<<1<<endl;
       	  continue;
       	}
	  int sum = 0;
	  for (int i = 2; i<= sqrt(n);i++)
	  {
	  	if(n%i == 0 && i == n/i)
	  	{
	  	  sum += i;
	  	}
	  	else if(n%i == 0)
	  	{
	  		sum += i;
	  		sum += n/i;
	  	}
	  }
      cout<<sum+1<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],max = 0;
	for(int i = 0;i<n;i++)
	{
	  cin>>a[i];
	  if(a[i]>max)
	  	max = a[i];
	}

  
	for (int i = 2; i<=max;i++)
	{
		int count = 0;
		int eq = a[0]%i;
	  for(int j = 0;j<n;j++)
	  {
	    if(a[j]%i == eq)
	    {
           count++;
	    }
	    else
	      break;
	  }
	  if(count == n)
	  {
	  	cout<<i<<" ";
	  }
	}

}
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int a[] = {1,2,3,4,5,6};
	int x = 3,index;

	for(int i = 0;i<6;i++)
	{
	   if(a[i]==x)
	   {
	     index = i;
	     break;
	   }
	}
	cout<<"index = "<<index<<endl;
}
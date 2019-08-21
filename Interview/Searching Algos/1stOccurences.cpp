#include<bits/stdc++.h>
using namespace std;


int BinarySearch(int a[], int n, int x)
{

	int start,end,mid,result = -1;
	start = 0;
	end = n-1;
    while(start<=end)
    {
    	mid = start + (end - start)/2;

    	if (x == a[mid])
    	{
           result = mid;
           end = mid - 1;
    	} 
    	else if(x < a[mid])
    		end = mid - 1;
    	else if (x > a[mid])
    		start = mid + 1;
    }
    return result;
}

int main()
{

	int a[] = {2,3,3,4,6,7};
	int x = 3,n,index;
	n = sizeof(a)/sizeof(a[0]);
    index = BinarySearch(a,n,x);

    if(index == -1)
      cout<<"Not Present"<<endl;

    else
     cout<<"First index of "<<x<<" is "<<index<<endl;

}
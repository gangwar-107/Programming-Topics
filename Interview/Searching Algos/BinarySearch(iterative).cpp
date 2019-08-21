// Binary Search -- >
// Time Complexity --> O(log(n))


#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int n, int x)
{

  int start,end,mid;
  start = 0;
  end = n-1;

  while(start <=end)
  {
  	 mid = (start+end)/2;
     if(x  == a[mid])
     	return mid;
     else if(x < a[mid])
     	end = mid - 1;
     else if(x>a[mid])
     	start = mid + 1;
  }
  return -1;
}

int main()
{

	int a[] = {1,2,3,4,8,9,7};
	int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
	int x = 7;
    int index = BinarySearch(a,n,x);
    if(index!=-1)
    	cout<<" index of "<<x<<" is "<<index<<endl;

    else
    	cout<<"Not present"<<endl;

}
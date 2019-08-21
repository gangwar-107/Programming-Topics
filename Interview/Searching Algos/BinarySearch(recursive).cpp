#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int low, int high, int x)
{

  if (low>high)
  	return -1;
   int mid = low + (high-low)/2;

   if(x == a[mid])
   	return mid;
   else if(x < a[mid])
   	return BinarySearch(a,low,mid-1,x);
   else if(x > a[mid])
   	  return BinarySearch(a,mid+1,high,x);
}


int main()
{
	int a[] = {1,4,3,5,7,6};
	int n = sizeof(a)/sizeof(a[0]);
	int x = 5,low,high;
	sort(a,a+n);
	low = 0;
	high = n-1;
	int index = BinarySearch(a,low,high,x);
	cout<<" index of "<<x<<" is "<<index;
}
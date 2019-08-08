// To find an element in circular sorted array (No Duplicacy)
// Time Complexity--> O(log(n))

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int n, int x)
{
   int start,end,mid;
   start = 0;
   end = n-1;
   while(start<=end)
   {
      mid = (start+end)/2;
      if(a[mid] == x)
      	return mid;
      if (a[mid]<=a[end])
      {
      	if(x>a[mid] && x<= a[end])
      		start = mid+1;
      	else
      		end = mid - 1;
      }
      else if(a[mid]>=a[start])
      {
        if (x >= a[start] && x< a[mid])
        	end = mid - 1;
        else
        	start = mid + 1;
      }
   }
   return -1;
}


int main()
{

   int a[] = {12,14,18,21,3,6,8,9};
   int x = 18;
   int n = sizeof(a)/sizeof(a[0]);
   int index = BinarySearch(a,n,x);
   cout<<"index of "<<x<<" is "<<index<<endl;
}
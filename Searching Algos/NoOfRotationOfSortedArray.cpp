// Program to find no. of circular rotations of a sorted array (No Duplicacy)
// Time Complexity--> O(log(n))

#include<bits/stdc++.h>
using namespace std;


int countRotations(int a[], int n)
{
  int start,end,mid;
  start = 0;
  end = n - 1;

  while(start<= end)
  {

  	if (a[start] <= a[end])  // complete array is sorted.
  		return start;
  	mid = (start + end )/2;
  	int next = (mid + 1)%n;  // mid is 0
  	int prev = (mid+n-1)%n;   // mid is 0
  	if(a[mid]<=a[next] && a[mid] <= a[prev])
  		return mid;

  	else if(a[mid]<=a[end])
  		end = mid - 1;
  	else if(a[mid]>=a[start])
  		start = mid + 1; // go to right direction 
  }
  return -1;
}


int main()
{
 

  int a[] = {4,5,6,7,0,1,2}; // find the index of minimum element
  int n = sizeof(a)/sizeof(a[0]);
  
  int count = countRotations(a,n);
  if(count!=-1)
  	cout<<count<<endl;
} 
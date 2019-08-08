#include<bits/stdc++.h>
using namespace std;


int findmin(int a[],int n)
{
  int start,end,mid;
  start = 0;
  end = n-1;
  while(start<=end)
  {
  	if(a[start]<a[end])
  		break; // if not rotated
    mid = start + (end - start)/2;
    if(a[mid]>a[end])
    	start = mid + 1;
    else if(a[mid]<a[end])
    	end = mid;
    else // if duplicates are included
    	end--;
    
  }
  return a[start];
}
int main()
{
  int a[] = {4,5,6,7,0,1,2}; // find the index of minimum element
  int n = sizeof(a)/sizeof(a[0]);
  
  int min = findmin(a,n);
  cout<<min<<endl;
}
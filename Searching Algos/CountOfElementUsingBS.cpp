
// Time Complexity --> O(log(n))
#include<bits/stdc++.h>
using namespace std;


int BinarySearch(int a[], int n, int x, bool index)
{
  int end,start,mid,result = -1;
  start = 0;
  end = n-1;

  while(start<=end)
  {
  	mid = start + (end - start)/2;
  	if(x == a[mid])
  	 {
  	   if(index)
  	   {
         result = mid;
         end = mid - 1;
  	   }
  	   else
  	   {
  	   	result = mid;
  	   	start = mid + 1;
  	   }
  	 }
  	 else if(x < a[mid])
  	 {
  	   end = mid - 1;
  	 }
  	 else if(x > a[mid])
  	 {
  	   start = mid + 1;
  	 }
  }
  return result;
}

int main()
{
  int a[] = {1,2,3,4,4,4,4,4,5,8,9};
  int n = sizeof(a)/sizeof(a[0]);
  int x = 4;
  int fi = BinarySearch(a,n,x,true);
  int si = BinarySearch(a,n,x,false);

  cout<<"count = "<<(si-fi+1)<<endl;

}
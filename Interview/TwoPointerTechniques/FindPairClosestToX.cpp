// program to find the pair nearest to x from two sorted arrays
// Time Complexity--> O(m+n)
#include<bits/stdc++.h>
using namespace std;

pair<int,int> findClosestPair(int arr1[],int arr2[],int sz1, int sz2,int x)
{
  int first,second,l,r;
  l = 0;
  r = sz2-1;
  int diff = INT_MAX;

  while(l<sz1 && r>=0)
  {
     if(abs(arr1[l]+arr2[r]-x)<diff)
     {
     	diff = abs(arr1[l]+arr2[r]-x);
     	first = l;
     	second = r;
     }

     else if(arr1[l]+arr2[r]>x)
         r--;
     else
     	l++;
  }
  pair<int,int> p;
  p = make_pair(l,r);
  return p;
}
int main()
{

	int arr1[] = {1,2,3,4,5};
	int arr2[] = {6,7,8,9,10};
	int x = 20;

	int sz1 = sizeof(arr1)/sizeof(arr1[0]);
	int sz2 = sizeof(arr2)/sizeof(arr2[0]);
	pair<int,int> p = findClosestPair(arr1,arr2,sz1,sz2,x);

	cout<<"pair--> "<<arr1[p.first]<<" "<<arr2[p.second]<<endl;
}
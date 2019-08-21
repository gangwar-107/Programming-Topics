// Program to find the pair have sum equal to x from the sorted array

//Time Complexity-->O(n)

#include<bits/stdc++.h>
using namespace std;

pair<int,int> findPair(int arr[], int n, int x)
{
	int i = 0;
	int j = n-1;
	while(i<j)
	{
	  if(arr[i]+arr[j]==x)
	  {
	  	pair<int,int> p;
	  	p = make_pair(i,j);
	  	return p; 
	  }
	 else if(arr[i]+arr[j]<x)
	 	i++;
	 else
	 	j--;
	}
}

int main()
{
  
  int arr[] = {1,3,5,8,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  int x = 11;
  pair<int,int> p = findPair(arr,n,x);

  cout<<"Pair--> "<<arr[p.first]<<" "<<arr[p.second]<<endl;
}
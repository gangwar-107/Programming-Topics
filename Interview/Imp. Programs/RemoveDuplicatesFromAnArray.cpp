// We can create the set of array element which removes duplicate elements from the array.

#include<bits/stdc++.h>
using namespace std;

int main()
 {
  
   int arr[7] = {1,2,2,5,5,3,4};
   vector<int> v;
   int n = sizeof(arr)/sizeof(arr[0]);
   for(int i = 0;i<n-1;i++)
   {
      if(arr[i]!=arr[i+1])
      {
         v.push_back(arr[i]);
      }
   }
   cout<<"Original Array"<<endl;
   for(int i = 0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"Array After removing original duplicates"<<endl;
   v.push_back(arr[n-1]);
   for(int i = 0;i<v.size();i++)
      cout<<v[i]<<" ";
 }

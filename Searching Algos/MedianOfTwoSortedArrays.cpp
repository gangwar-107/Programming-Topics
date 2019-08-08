// Find the median of the median of the two sorted array 
// Time Complexity O(log(min(x,y)));

#include<bits/stdc++.h>
using namespace std;

double median(int input1[], int input2[],int x,int y)
{
  
  int low = 0;
  int high = x;
  int maxleftX,minrightX,maxleftY,minrightY;

  while(low<=high)
  {
    int partitionX = (low+high)/2; 
    int partitionY = (x+y+1)/2 - partitionX;
     if (partitionX == 0)
       maxleftX =  INT_MIN;
     else
       maxleftX = input1[partitionX-1];
     if (partitionX == x)
       minrightX = INT_MAX;
     else
     	minrightX = input1[partitionX];
     
     if (partitionY == 0)
        maxleftY = INT_MIN;
     else
     	maxleftY = input2[partitionY-1];
     if (partitionY == y)
        minrightY = INT_MAX;
    else
        minrightY = input2[partitionY];


    if(maxleftX<=minrightY && maxleftY<=minrightX)
    {
      if((x+y)%2==0)
        return  (double(max(maxleftX,maxleftY)+ min(minrightX,minrightY))/2);
      else
      	return double(max(maxleftX,maxleftY));
    }
    else if(maxleftX>minrightY)
    	high = partitionX - 1;
    else
    	low = partitionX + 1;
  }
}

int main()
{
  int input1[] = {1,2};
  int input2[] = {3,4};
  int x = sizeof(input1)/sizeof(input1[0]);
  int y = sizeof(input2)/sizeof(input2[0]);
  double med = median(input1,input2,x,y);

  cout<<"median = "<<med<<endl;
}

// TimeComplexity -->O(m+n)
#include<bits/stdc++.h>
using namespace std;


void findPrefixArray(int *prefixArray, int m, string pattern)
{
   int j = 0;
   prefixArray[0]=0;
   for(int i = 1;i<m;i++)
   {
   	if(pattern[i] == pattern[j])
   	{
   	  j++;
   	  prefixArray[i] = j; 
   	}
   	else
   	{
   		if(j!=0)
   		{
         j = prefixArray[j-1];
   		 i--;
   		}
   		else
   		 prefixArray[i]=0;
   	}
   }
}


void KMP(string mainString,string pattern, int *locarray,int &loc)
{
	int i,j,m,n;
	i = j = 0;
	n = mainString.size();
	m = pattern.size();
	int prefixArray[m];
	findPrefixArray(prefixArray, m, pattern);

	loc= 0;
	while(i<n)
     {
     	if(pattern[j]==mainString[i])
     	{
     		i++; j++;
     	}
     	if(j==m)
     	{
     	  locarray[loc] = i-j;
     	  loc++;
     	  j = prefixArray[j-1];
     	}
     	else if(i<n && mainString[i]!=pattern[j])
     	{
     	  if(j!=0)
     	  	j = prefixArray[j-1];
     	  else
     	  	i++;

     	}
     }
}

int main()
{
 
 string  mainString = "AAAAAAABABAAABAB";
 string pattern = "AABAB";
 int locarray[mainString.size()];
 int index;
 KMP(mainString,pattern,locarray,index);

 for(int i =0;i<index;i++)
 {
 	cout<<"Pattern found at index: "<<locarray[i]<<endl;
 }
}
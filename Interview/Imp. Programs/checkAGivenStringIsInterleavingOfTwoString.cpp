// A string is interleaving of two string if it contains all the characters of given strings
// And Order of all characters of string A and B is preserved.
// check whether the third string is the shuffeled result of two string or not.

#include<bits/stdc++.h>
using namespace std;

bool interleaving(string A,string B,string C)
{
	if(C.length()<A.length()+B.length())
		return false;
	int j = 0,k=0;
   for(int i = 0;i<C.length();i++)
   {
   	if(A[j]==C[i])
   	{
   		j++;
   	}
   	else if(B[k]==C[i])
   	{
   		k++;
   	}
   	else
   		return false;
   }
   return true;
}

int main()
{
	string a,b,c;
	int t;
	cin>>t;
	cin>>a>>b;
	while(t--)
	{
		cin>>c;
	if(interleaving(a,b,c))
		cout<<"Interleaving";
	else
		cout<<"Not Interleaving";
	}
	
}

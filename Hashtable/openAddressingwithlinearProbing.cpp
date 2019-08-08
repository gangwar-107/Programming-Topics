// implemenation of linear probing 

#include<bits/stdc++.h>
using namespace std;
#define mod 20

int hashFunc(string str)
{
	int sum = 0;
  for(int i = 0;i<str.length();i++)
    sum += str[i]-'a';

  return sum%mod;
}

int main()
{
	string hashTable[20];
	string str;
	int index,flag=0;
	for(int i = 0;i<20;i++)
	{
		cin>>str;
		index = hashFunc(str);
		while(hashTable[index]!="")
		{
			index = (index+1)%20;
		}
		hashTable[index] = str;
	}
	for(int i = 0;i<20;i++)
		cout<<hashTable[i]<<" ";

   cin>>str; // searching
   index = hashFunc(str);
   while(hashTable[index]!=str)
   	 {
   	 	index = (index+1)%20;
   	 }
   	if(hashTable[index]==str)
   		cout<<"found at index "<<index<<endl;
   	else
   		cout<<"Not Found"<<endl;
}
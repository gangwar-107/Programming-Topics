// Open Hasing or Chaining
// Insertion and Searching of string using array of vectors of strings

#include<bits/stdc++.h>
using namespace std;
# define mod 20

int hashFunc(string str)
{
	int sum = 0;
	for(int i = 0;i<str.size();i++)
      {
         sum +=str[i]-'a';
      }

      return sum%mod;

}

int main()
{

 vector<string> hashTable[20];
 string str;
 int index,flag=0;
 for(int i = 0;i<10;i++)
   {
   	cin>>str;
    index = hashFunc(str);
    hashTable[index].push_back(str);
   }
   
   	 cin>>str;
   	 index = hashFunc(str);
   	 for(int i = 0;i<hashTable[index].size();i++)
   	 {
         if(hashTable[index][i]==str)
         {
         	cout<<"Found at "<<index+1<<" vector "<<i<<"th column"<<endl;
         	flag = 1;
         	break;
         }
   	 }
   	 if(flag==0)
   	 	cout<<"Not Found"<<endl;

   	 for(int i = 0;i<20;i++)
   	 {
   	 	for(int j = 0;j<hashTable[i].size();j++)
   	 		cout<<hashTable[i][j]<<" ";
   	 	cout<<endl;
   	 }
} 
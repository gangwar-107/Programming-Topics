// First Non Repeated character
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int hash[123] = {0};
	for(int i = 0;i<str.length();i++)
	{
		hash[str[i]]++;
	}
	for(int i = 0;i<str.length();i++)
	{
		if(hash[str[i]]==1)
			{
				cout<<str[i]<<endl;
				break;
			}
	}
}
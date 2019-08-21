#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str,result;
	cin>>str;
	int hash[123] = {0};
	for (int i = 0; i < str.length(); ++i)
	{
		if(hash[str[i]]==0)
		{
		  hash[str[i]] = 1;
		  result += str[i];
		}
	}
	cout<<result<<endl;
}
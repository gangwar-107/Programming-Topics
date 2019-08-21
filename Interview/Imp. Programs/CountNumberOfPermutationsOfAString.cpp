// Program to find the no. of distinct permutatio of the string.

#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	int fact = 1,i=1;
	while(i<=n)
	{
		fact = fact * i;
		i++;
	}
	return fact;
}


int main()
{
	string str;
    int permute = 0;
    cin>>str;
    int n = str.length();
    int freq[26] = {0};
    for(int i = 0;i<n;i++)
      freq[str[i]-'a']++;
     int fact = 1;
    for(int i = 0;i<26;i++)
    {
        fact = fact * factorial(freq[i]);
    }

   permute = factorial(n)/fact;
   cout<<permute<<endl;
  }
//  Program to find the permutation of a string 
// next_permutation(str.begin(),str.end()) it gives lexicographically next permutation
// If current string is lexicographically large then it returns false.
#include<bits/stdc++.h>
using namespace std;

void permute(string str, vector<string> &vec)
{
	sort(str.begin(),str.end());

	do
	{
		vec.push_back(str);
	} while(next_permutation(str.begin(),str.end()));
}

int main()
{
	string str;
	cin>>str;
    vector<string> vec;
    permute(str,vec);

    for(int i = 0;i<vec.size();i++)
    	cout<<vec[i]<<endl;
}
/* We can precompute prime factors of n numbers using seive in O(log(n))
we will compute the minimum prime factor of each number and divide that number by min. prime factor each time.
*/

#include<bits/stdc++.h>
using  namespace std;

int main()
{
	int n;
	cin>>n;
	int pf[n+1] = {0};
	for(int i=2; i*i<=n; i++)
	{
		if(pf[i]==0)
		{
			for(int j = i*i;j<=n;j+=i)
			{
				if(pf[j] == 0)
					pf[j] = i;
			}
		}

	}
	for(int i = 2;i<=n;i++)
	{
		if(pf[i]==0)
			pf[i] = i;
	}
    
    int x;
    cin>>x;
  	vector<int> v;
  	while(x!=1)
	{
      v.push_back(pf[x]);
      x = x / pf[x];
	}
    for(int j = 0;j<v.size();j++)
	{
		cout<<v[j]<<" ";
	} 
	cout<<endl;
   

}
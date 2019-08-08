#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{

ios_base::sync_with_stdio(false); 
cin.tie(NULL);  
int t,l,r,count;
bool isPrime[1000001];
memset(isPrime,true,sizeof(isPrime));

isPrime[0] = false;
isPrime[1] = false;

for (int i = 2; i<=sqrt(1000001);i++)
 {
   if(isPrime[i] == true)
   {
   	for (int j = 2;i*j<=1000001;j++)
   	{
   	  isPrime[i*j] = false;
   	}
   }
 }
cin>>t;
while(t--)
{

	cin>>l>>r;
	count = 0;
  for (int i = l;i<=r;i++)
  {
      if(isPrime[i] == true)
      	count++;
  }
  cout<<count<<endl;
}

}
// Program to find the rank of the students on the basis of their total marks higher the marks lower the
// rank. So if two students has same total marks sort them with maths marks if math marks same then rank
// them with physics marks if physics marks also same then rank them in any manner

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct student
{
  string name;
  int mt,phy,che,total,rank;
};

bool cmp(student s1,student s2)
{
   if(s1.total!=s2.total)
   	return s1.total>s2.total;

   if(s1.mt!=s2.mt)
   	return s1.mt>s2.mt;

   if(s1.phy!=s2.phy)
   	return s1.phy>s2.phy;

   return s1.che>s2.che;
}

void findrank(student s[],int n)
{
  for(int i=0;i<n;i++)
   s[i].total = s[i].mt+s[i].phy+s[i].che;
  
  sort(s,s+n,cmp);

  for(int i=0;i<n;i++)
   s[i].rank = i+1;
}
int main()
{
  ll n;
  cin>>n;
  student s[n];
  for(int i=0;i<n;i++)
   cin>>s[i].name>>s[i].mt>>s[i].phy>>s[i].che;
  findrank(s,n);
  cout<<"Rank"<<"\t"<<"name"<<"\t"<<"Math"<<"\t"<<"physics"<<"\t"<<"chemistry"<<"\t"<<"total"<<endl;
  for(int i=0;i<n;i++)
   cout<<s[i].rank<<"\t"<<s[i].name<<"\t"<<s[i].mt<<"\t"<<s[i].phy<<"\t"<<s[i].che<<"\t"<<s[i].total<<endl;
}
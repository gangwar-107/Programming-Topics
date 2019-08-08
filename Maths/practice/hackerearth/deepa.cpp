#include<bits/stdc++.h>
using namespace std;

int main()
 {
  
  string str;
  cin>>str;
  replace_all(str.begin(),str.end(),'@','#');
  cout<<str;
 }

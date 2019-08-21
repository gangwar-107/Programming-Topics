
bool sbs(pair<ff,ff> p1,pair<ff,ff> p2)
{
   return (p1.second>p2.second);
}

ff fks( vector<pair<ff,ff>> p, ff w, int n)
{
  ff ans = 0;
  for(int i=0;i<n;i++)
  {
    if(w==0)
     break;
    if(w>=p[i].first)
     {
        ans += p[i].second*p[i].first;
        w -= p[i].first;
     }
    else if(w<p[i].first)
     {
       ans += p[i].second*w;
       w = 0;
     }
  }
  
  return ans;
}

int main()
{
  int t,n;
  ff w;
  cin>>t;
  while(t--)
  {
    cin>>n>>w;
    ff val[n];
    ff wt[n];
    for(int i=0;i<n;i++)
      cin>>val[i]>>wt[i];
    vector<pair<ff,ff>> p;
    for(int i=0;i<n;i++)
       p.push_back(make_pair(wt[i],val[i]/wt[i]));
    sort(p.begin(),p.end(),sbs);
    //for(int i=0;i<n;i++)
    //cout<<p[i].first.first<<" "<<p[i].first.second<<" "<<p[i].second<<endl;
    cout<<fixed<<setprecision(2)<<fks(p,w,n)<<endl;
  }
}
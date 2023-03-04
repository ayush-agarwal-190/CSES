#include<bits/stdc++.h>
using namespace std ;
vector<int>v;
 #define ll long long   
int main()
{
ll n;
cin>>n;

v.resize(n);
for(int &x:v)
cin>>x;

// cout<<v[0];
// cout<<v[1];
// cout<<v[2];

sort(v.begin(),v.end());
ll median= v[n/2];
ll ans=0;
for(const int &x:v)
ans=ans+abs(median-x);
cout<<ans<<endl;

return 0;

}
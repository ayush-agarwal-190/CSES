#include<bits/stdc++.h>
using namespace std ;
vector<int>v;const int mxN = 2e5+5;
 #define ll long long   
ll dp[mxN];
int main()
{
ll n;
cin>>n;

ll a[n+1]={0};
for(int i=1;i<=n;i++)
cin>>a[i];

sort(a,a+n+1);
dp[0]=1;
for(int i=1;i<=n;i++)
{
    if(dp[i-1]<a[i])
    {
     cout<<dp[i-1];
    return 0;

    }

    dp[i]=dp[i-1]+a[i];
}
cout<<dp[n];


return 0;

}
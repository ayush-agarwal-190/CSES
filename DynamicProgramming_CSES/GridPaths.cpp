#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dp[1001][1001];
const int mod=1e9+7;

vector<string>arr;

void solve()
{
    int n;
    cin>>n;
    arr.resize(n);

    for(int i=0;i<n;i++)
    {
       cin>>arr[i];     
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 and j==0)
            {
                dp[i][j]=1;
            }
            else
            {
                dp[i][j]=0;
               if(i)
               dp[i][j]=dp[i][j]%mod+ dp[i-1][j]%mod;
               if(j)
               dp[i][j]=dp[i][j]%mod+dp[i][j-1]%mod;

            }
            if(arr[i][j]=='*')
            dp[i][j]=0;
        }
    }
    cout<<(dp[n-1][n-1]%mod)<<endl;
}
int main() {
    int t=1;
    // cin>>t;
	while(t--)
    solve();
}
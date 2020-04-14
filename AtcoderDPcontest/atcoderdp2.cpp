#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n+5];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int dp[n+5];
    dp[0]=0;
    dp[1]=abs(a[1]-a[0]);
    for(int i=2;i<n;i++)
    {
        dp[i]=INT_MAX;
        for(int j=1;j<=k && j<=i; j++)
        {
            dp[i]=min(dp[i],dp[i-j]+abs(a[i-j]-a[i]));
        }
    }
    cout<<dp[n-1]<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
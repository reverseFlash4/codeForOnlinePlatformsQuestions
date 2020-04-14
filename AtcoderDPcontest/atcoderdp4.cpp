#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,w;
    cin>>n>>w;
    long long  v[n+1],wt[n+1];
    for(long long i=1;i<=n;i++)
        cin>>wt[i]>>v[i];
    long long dp[n+2][w+2]={0};
    for(long long i=0;i<=n;i++)
    {
        for(long long j=0;j<=w;j++)
            dp[i][j]=0;
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=w;j++)
        {    if(j>=wt[i])
                dp[i][j]=max(dp[i-1][j],v[i]+dp[i-1][j-wt[i]]);
             else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][w]<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
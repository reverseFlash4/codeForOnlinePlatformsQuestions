#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int h[n+5];
    for(int i=0;i<n;i++)
        cin>>h[i];
    int dp[n+5];
    dp[0]=0;
    dp[1]=abs(h[0]-h[1]);
    for(int i=2;i<n;i++)
    {
        dp[i] = min(dp[i-1] + abs(h[i]-h[i-1]),dp[i-2] + abs(h[i]-h[i-2]));
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
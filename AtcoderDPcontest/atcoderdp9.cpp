#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    double p;
    double dp[n+5][n+5];
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        for(int j=0;j<=i;j++)
        {
            if(j) dp[i][j]+=p*dp[i-1][j-1];
            dp[i][j]+=(1-p)*dp[i-1][j];
        }
    }
    double ans=0;
    for(int i=0;i<=n;i++)
        if(i>n-i) ans+=dp[n][i];
    printf("%.12lf\n",ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
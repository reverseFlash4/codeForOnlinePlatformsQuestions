#include <bits/stdc++.h>
using namespace std;

int dp[100005];

int dfs(int x, vector<int> e[])
{
    if(dp[x]!=-1)
        return dp[x];
    int ans=0;
    for(int i=0;i<e[x].size();i++)
    {
        ans=max(ans,dfs(e[x][i],e)+1);
    }
    dp[x]=ans;
    return dp[x];
}

void solve()
{
    int n,m,ans=0;
    cin>>n>>m;
    vector<int> e[n+1];
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        e[x].push_back(y);
    }
    for(int i=1;i<=n;i++)dp[i]=-1;
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,dfs(i,e));
    }
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
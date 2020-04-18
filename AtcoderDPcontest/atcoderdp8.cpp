#include <bits/stdc++.h>
using namespace std;

const int m=1e9+7;

void solve()
{
    int h,w;
    cin>>h>>w;
    char a[h+1][w+1];
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
            cin>>a[i][j];
    }
    int dp[h+1][w+1];
    dp[0][0]=0;
    bool hash=false;
    for(int i=1;i<h;i++)
    {
        if(a[i][0]=='#')
        {
            hash=true;
            dp[i][0]=0;
        }
        else if(!hash)
            dp[i][0]=1;
        else
            dp[i][0]=0;
    }
    hash=false;
    for(int i=1;i<w;i++)
    {
        if(a[0][i]=='#')
        {
            hash=true;
            dp[0][i]=0;
        }
        else if(!hash)
            dp[0][i]=1;
        else
            dp[0][i]=0;
    }
    for(int i=1;i<h;i++)
    {
        for(int j=1;j<w;j++)
        {
            if(a[i][j]=='#')
                dp[i][j]=0;
            else
                dp[i][j]=(dp[i-1][j]%m+dp[i][j-1]%m)%m;
        }
    }
    cout<<dp[h-1][w-1]<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
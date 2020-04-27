//Day 26 of Leetcode 30 days challenge, by Kartik Mohan
// Longest Common Subsequence

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length(),n=text2.length();
        int dp[m+1][n+1];
        dp[0][0]=0;
        for(int i=0;i<=m;i++)
            dp[i][0]=0;
        for(int i=0;i<=n;i++)
            dp[0][i]=0;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(text1[i-1]==text2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                //cout<<dp[i][j]<<" ";
            }
        }
        char ans[dp[m][n]+1];
        int index=dp[m][n];
        ans[index]='\0';
        int i=m,j=n;
        while(i>0 && j>0)
        {
            if(text1[i-1]==text2[j-1])
            {
                ans[index-1]=text1[i-1];
                index--,i--,j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]) i--;
            else j--;
        }
        cout<<ans<<" ";
        return dp[m][n];
    }
};

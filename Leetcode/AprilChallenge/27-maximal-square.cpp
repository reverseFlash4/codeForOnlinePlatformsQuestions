//Day 27 of Leetcode 30 days challenge, by Kartik Mohan
// Maximal Square

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(!matrix.size()) return 0;
        int n=matrix.size(),m=matrix[0].size();
        int dp[n+5][m+5];
        int ans=0;
        for(int i=0;i<n;i++) dp[i][0]=matrix[i][0]-48,ans=max(ans,dp[i][0]);
        for(int i=0;i<m;i++) dp[0][i]=matrix[0][i]-48,ans=max(ans,dp[0][i]);
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]=='1') dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
                else dp[i][j]=0;
                ans=max(ans,dp[i][j]);
            }
        }
        return ans*ans;
    }
};

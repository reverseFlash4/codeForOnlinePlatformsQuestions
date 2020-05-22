// Day 21 of LeetCode May Challenge, by Kartik Mohan
//  Count Square Submatrices with All Ones
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int ans=0;
        vector<vector<int>> dp(n+1,vector<int>(m+1));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                if(matrix[i-1][j-1]==1)
                    ans+=(dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]}));
        }
        return ans;
    }
};

 //Day 17 of Leetcode 30 days challenge, by Kartik Mohan
// Number of Islands
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        if(!n)
            return 0;
        int m=grid[0].size(),numberOfIslands=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    num_islands(grid,i,j,n,m);
                    numberOfIslands+=1;
                }
            }
        }
        return numberOfIslands;
    }
    void num_islands(vector<vector<char>>& grid,int i,int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0')
            return;
        grid[i][j]='0';
        num_islands(grid,i+1,j,n,m);
        num_islands(grid,i-1,j,n,m);
        num_islands(grid,i,j+1,n,m);
        num_islands(grid,i,j-1,n,m);
    }
};

// Day 11 of LeetCode May Challenge, by Kartik Mohan
// Flood Fill
class Solution {
public:
    void dfs(vector<vector<int>>& image, int color, int newColor,int m, int n,int i,int j)
    {
        if(image[i][j]!=color) return;
        image[i][j]=newColor;
        if(i+1 < n)
            dfs(image,color,newColor,m,n,i+1,j);
        if(i-1 >= 0)
            dfs(image,color,newColor,m,n,i-1,j);
        if(j+1 < m)
            dfs(image,color,newColor,m,n,i,j+1);
        if(j-1 >= 0)
            dfs(image,color,newColor,m,n,i,j-1);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=(int)image.size();
        int m=image[0].size();
        int color=image[sr][sc];
        if(color==newColor) return image;
        dfs(image,color,newColor,m,n,sr,sc);
        return image;
    }
};

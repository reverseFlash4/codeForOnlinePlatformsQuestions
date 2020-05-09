//Day 8 of Leetcode May Challenge, by Kartik Mohan
// Check If It Is A Straight Line
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=(int)coordinates.size();
        if(n==2) return true;
        double x1,x2,y1,y2;
        for(int i=1;i<n-1;i++)
        {
            double x,y;
            x=coordinates[i][0];
            y=coordinates[i][1];
            x1=coordinates[i-1][0];
            y1=coordinates[i-1][1];
            x2=coordinates[i+1][0];
            y2=coordinates[i+1][1];
            if((y-y1)/(x-x1) != (y2-y)/(x2-x)) return false;
        }
        return true;
    }
};

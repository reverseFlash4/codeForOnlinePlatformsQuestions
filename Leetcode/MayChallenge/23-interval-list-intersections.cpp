// Day 23 of LeetCode May Challenge, by Kartik Mohan
//  Interval List Intersections
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> ans;
        int n=A.size(),m=B.size();
        if(n==0 || m==0) return ans;
        for(int i=0;i<n;i++)
        {
            int a=A[i][0],b=A[i][1];
            for(int j=0;j<m;j++)
            {
                int c=B[j][0],d=B[j][1];
                if((a<=c && c<=b) || (c<=a && a<=d))
                {
                    //cout<<a<<b<<c<<d<<endl;
                    vector<int> t;
                    t.push_back(max(a,c));
                    t.push_back(min(b,d));
                    ans.push_back(t);
                }
            }
        }
        return ans;
    }
};

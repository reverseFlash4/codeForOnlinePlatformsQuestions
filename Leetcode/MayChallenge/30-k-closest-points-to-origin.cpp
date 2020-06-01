// Day 30 of LeetCode May Challenge, by Kartik Mohan
//  K Closest Points to Origin
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<pair<int,pair<int,int>>> v;
        vector<vector<int>> ans;
        int n=points.size();
        for(int i=0;i<n;i++)
        {
            int x=points[i][0],y=points[i][1];
            v.push_back({x*x+y*y,{x,y}});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<K;i++)
        {
            int x=v[i].second.first,y=v[i].second.second;
            vector<int> temp;
            temp.push_back(x);
            temp.push_back(y);
            ans.push_back(temp);
        }
        return ans;
    }
};

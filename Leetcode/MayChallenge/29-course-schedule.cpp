// Day 29 of LeetCode May Challenge, by Kartik Mohan
//  Course Schedule
class Solution {
public:
    bool isCycle(vector<int> adj[],vector<int>& v,int u)
    {
        if(v[u]==1) return true;
        if(v[u]==0)
        {
            v[u]=1;
            for(auto i:adj[u])
            {
                if(isCycle(adj,v,i))
                    return true;
            }
        }
        v[u]=2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<int> adj[n+1];
        for(auto i: prerequisites)
            adj[i[1]].push_back(i[0]);
        vector<int> visited(n+1,0);
        for(int i=0;i<numCourses;i++)
            if(isCycle(adj,visited,i))
                return false;
        return true;
    }
};

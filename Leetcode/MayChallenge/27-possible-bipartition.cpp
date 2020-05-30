// Day 27 of LeetCode May Challenge, by Kartik Mohan
// Possible Bipartition
class Solution {
public:
    unordered_map<int,vector<int>> adj;
    vector<int> color;
    bool bfs(int u)
    {
        color[u]=1;
        queue<int> q;
        q.push(u);
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(auto i: adj[x])
            {
                if(color[i]==-1)
                {
                    color[i]=1-color[x];
                    q.push(i);
                }
                else if(color[i]==color[x]) return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        for(auto i:dislikes)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        color.resize(N+1,-1);
        for(int i=1;i<=N;i++)
        {
            if(color[i]==-1)
            {
                if(!bfs(i))
                    return false;
            }
        }
        return true;
    }
};

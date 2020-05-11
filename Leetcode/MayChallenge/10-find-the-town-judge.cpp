// Day 10 of LeetCode May Challenge, by Kartik Mohan
// Find the Town Judge
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int trusted[N+5];
        int trusts[N+5];
        for(int i=1;i<=N;i++)
        {
            trusted[i]=0;
            trusts[i]=-1;
        }
        int n=(int)trust.size();
        for(int i=0;i<n;i++)
        {
            int a=trust[i][0],b=trust[i][1];
            trusted[b]++;
            trusts[a]=b;
        }
        for(int i=1;i<=N;i++)
        {
            if(trusted[i]==N-1 && trusts[i]==-1) return i;
        }
        return -1;
    }
};

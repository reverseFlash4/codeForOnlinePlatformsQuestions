//Day 12 of Leetcode 30 days challenge, by Kartik Mohan
// Last Stone Weight
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        while(n>1)
        {
            sort(stones.begin(),stones.end());
            int a=stones[n-1]-stones[n-2];
            stones.pop_back();
            stones.pop_back();
            if(a>0)
                stones.push_back(a);
            n=stones.size();
        }
        return (n>0?stones[0]:n);
    }
};

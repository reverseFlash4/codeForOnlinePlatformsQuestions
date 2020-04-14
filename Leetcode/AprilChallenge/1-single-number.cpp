//Day 1 of Leetcode 30 days challenge, by Kartik Mohan
// Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto i:nums)
            ans^=i;
        return ans;
    }
};

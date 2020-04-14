//Day 3 of Leetcode 30 days challenge, by Kartik Mohan
// Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxl=nums[0],maxg=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxl=max(nums[i],maxl+nums[i]);
            maxg=max(maxl,maxg);
        }
        return maxg;
    }
};

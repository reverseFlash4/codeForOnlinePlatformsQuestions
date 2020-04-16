 //Day 15 of Leetcode 30 days challenge, by Kartik Mohan
// Product of Array except self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),t=1;
        vector<int> ans(n,1);
        for(int i=0;i<n;i++)
        {
            ans[i]=t;
            t*=nums[i];
        }
        t=1;
        for(int i=n-1;i>=0;i--)
        {
            ans[i]*=t;
            t*=nums[i];
        }
        return ans;
    }
};

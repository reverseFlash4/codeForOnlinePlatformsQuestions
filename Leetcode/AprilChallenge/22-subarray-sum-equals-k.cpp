//Day 22 of Leetcode 30 days challenge, by Kartik Mohan
//Subarray sum equals K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),curr_sum=0,ans=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++)
        {
            curr_sum+=nums[i];
            ans+=mp[curr_sum-k];
            mp[curr_sum]++;
        }
        return ans;
    }
};

//Day 25 of Leetcode 30 days challenge, by Kartik Mohan
// Jump Game
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        int target=n-1, max_reach=0;
        for(int i=0;i<n;i++)
        {
            if(max_reach>=target) return true;
            if(i>max_reach) return false;
            max_reach=max(max_reach,i+nums[i]);
        }
        return false;
    }
};

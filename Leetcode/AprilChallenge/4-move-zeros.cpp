//Day 4 of Leetcode 30 days challenge, by Kartik Mohan
// Move Zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        for(int i=j;i<nums.size();i++)
            nums[i]=0;
    }
};

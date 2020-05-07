//Day 6 of Leetcode May Challenge, by Kartik Mohan
// Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=(int)nums.size();
        int val=0,valC=0;
        for(int i=0;i<n;i++)
        {
            if(valC==0) val=nums[i];
            if(val==nums[i]) valC++;
            else valC--;
        }
        return val;
    }
};

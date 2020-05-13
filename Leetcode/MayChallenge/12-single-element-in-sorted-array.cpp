// Day 12 of LeetCode May Challenge, by Kartik Mohan
// Single Element in a Sorted Array
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=(int)nums.size();
        int l=0,r=n-1;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==nums[mid^1]) //keeps track of odd even pair, if it is true then single element is on the other side
                l=mid+1;
            else r=mid;
        }
        return nums[l];
    }
};

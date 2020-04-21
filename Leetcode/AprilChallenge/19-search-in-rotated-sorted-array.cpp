//Day 19 of Leetcode 30 days challenge, by Kartik Mohan
// Search in Rotated Sorted Array
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=low + (high-low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid] < nums[low] )
            {
                if(target>nums[mid] && target<=nums[high]) low=mid+1;
                else high=mid-1;
            }
            else if(nums[mid] > nums[high])
            {
                if(target<nums[mid] && target>=nums[low]) high=mid-1;
                else low=mid+1;
            }
            else
            {
                if(target>nums[mid]) low=mid+1;
                else high=mid-1;
            }
        }
        return -1;
    }
};

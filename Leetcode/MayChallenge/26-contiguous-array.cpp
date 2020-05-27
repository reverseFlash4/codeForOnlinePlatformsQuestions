// Day 26 of LeetCode May Challenge, by Kartik Mohan
//  Contiguous Array
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size(),len=0,sum=0;
        unordered_map<int,int> ump;
        ump[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum+=(nums[i]==0?-1:1);
            if(ump.find(sum)!=ump.end())
            {
                if(len<i-ump[sum])
                    len=i-ump[sum];
            }
            else
                ump[sum]=i;
        }
        return len;
    }
};

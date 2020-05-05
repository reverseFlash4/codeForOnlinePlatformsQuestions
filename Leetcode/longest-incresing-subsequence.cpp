// This is the solution for Longest Increasing Subsequence, by Kartik Mohan
// T(n) = O(nlogn), this approach does not use dynamic programming, rather uses binary search and auxiliary space of n.

class Solution {
public:
    int ceilIdx(int tail[],int l,int r,int x)
    {
        while(r>l)
        {
            int mid= l + (r-l)/2;
            if(tail[mid]>=x) r=mid;
            else l=mid+1;
        }
        return r;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n=(int)nums.size();
        if(!n) return 0;
        int tail[n+5],len=1;
        tail[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            //cout<<"dsf"<<endl;
            if(nums[i]>tail[len-1])
            {
                tail[len]=nums[i];
                len++;
            }
            else
            {
                int c=ceilIdx(tail,0,len-1,nums[i]);
                tail[c]=nums[i];
            }
            //cout<<"LOL"<<endl;
        }
        return len;
    }
};

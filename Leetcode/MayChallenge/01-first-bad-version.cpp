//Day 1 of Leetcode May Challenge, by Kartik Mohan
// First Bad Version
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,hi=n;
        while(low<=hi)
        {
            int mid= low + (hi-low)/2;
            if(mid==low && isBadVersion(mid)) return mid;
            if(mid==hi && isBadVersion(mid)) return hi;
            if(!isBadVersion(mid) && isBadVersion(mid+1)) return mid+1;
            if(!isBadVersion(mid)) low=mid+1;
            else hi=mid-1;
        }
        assert(false);
    }
};

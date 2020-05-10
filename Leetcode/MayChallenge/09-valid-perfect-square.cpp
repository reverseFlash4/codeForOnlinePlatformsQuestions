//Day 9 of Leetcode May Challenge, by Kartik Mohan
// Valid Perfect Square
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        long long l=1,r=num/2;
        while(l<=r)
        {
            long long mid=l + (r-l)/2;
            if(mid*mid == num) return true;
            if(mid*mid < num) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
};

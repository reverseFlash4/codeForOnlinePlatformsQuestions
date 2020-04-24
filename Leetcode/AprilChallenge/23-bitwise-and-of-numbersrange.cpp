//Day 23 of Leetcode 30 days challenge, by Kartik Mohan
// Bitwise and of Number Range
class Solution {
public:
    
    int rangeBitwiseAnd(int m, int n) {
        // Since I was not able to solve this question by my own with proper solution, so I was inspired by
        // Errichto's code which he uploaded on his YT channel after the challenge's expiration.
        int ans=0;
        for(int i=30;i>=0;i--) //since an integer is of 32 bits and the first bit is used as signed
        {
            if((m&(1<<i)) != (n&(1<<i)))
                break;
            else
                ans|=(m&(1<<i));
        }
        return ans;
    }
};

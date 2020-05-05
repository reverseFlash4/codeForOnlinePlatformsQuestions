//Day 4 of Leetcode May Challenge, by Kartik Mohan
// Number Complement
class Solution {
public:
    int getsize(int x)
    {
        int c=0;
        while(x)
        {
            c++;
            x=(x>>1);
        }
        return c;
    }
    
    int findComplement(int num) {
        int t=getsize(num);
        cout<<t;
        int ans=0;
        while(t--)
            ans|=(1<<t);
        ans=ans^num;
        return ans;
    }
};

//Day 2 of Leetcode 30 days challenge, by Kartik Mohan
// Happy Number
class Solution {
public:
    int sumdig(int x)
    {
        int s=0;
        while(x)
        {
            s+=(x%10)*(x%10);
            x=x/10;
        }
        return s;
    }
    bool isHappy(int n) {
        if(n==1)
            return true;
        unordered_set<int> us;
        while(n!=1)
        {
            int a=sumdig(n);
            if(us.find(a)!=us.end())
                return false;
            us.insert(a);
            n=a;
        }
        return true;
    }
};

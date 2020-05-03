//Day 2 of Leetcode May Challenge, by Kartik Mohan
// Jewels And Stones
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> us;
        for(int i=0;J[i]!='\0';i++)
            us.insert(J[i]);
        int c=0;
        for(int i=0;S[i]!='\0';i++)
        {
            if(us.find(S[i])!=us.end())
                c++;
        }
        return c;
    }
};

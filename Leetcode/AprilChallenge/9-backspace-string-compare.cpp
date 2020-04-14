//Day 9 of Leetcode 30 days challenge, by Kartik Mohan
// Backspace string compare
class Solution {
public:
    string getback(string x)
    {
        string ans="";
        reverse(x.begin(),x.end());
        int hashes=0;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='#')
                hashes++;
            else
            {
                if(hashes)
                    hashes--;
                else
                    ans+=x[i];
            }
        }
        return ans;
    }
    bool backspaceCompare(string S, string T) {
        S = getback(S);
        T = getback(T);
        if(S==T)
            return true;
        else
            return false;
    }
};

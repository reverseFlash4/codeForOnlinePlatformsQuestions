//Day 5 of Leetcode May Challenge, by Kartik Mohan
// First Unique Character in a String
class Solution {
public:
    int firstUniqChar(string s) {
        int hasher[26]={0};
        for(int i=0;i<s.length();i++)
            hasher[int(s[i])-'a']++;
        for(int i=0;i<s.length();i++)
            if(hasher[int(s[i])-'a']==1)
                return i;
        return -1;
    }
};

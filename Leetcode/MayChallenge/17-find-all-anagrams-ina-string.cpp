// Day 17 of LeetCode May Challenge, by Kartik Mohan
// Find All Anagrams in a String
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int f1[26]={0};
        int f2[26]={0};
        vector<int> ans;
        for(char c:p) f1[c-'a']++;
        int n=p.length();
        if(n>s.length()) return ans;
        string temp;
        for(int i=0;i<n;i++)
        {
            f2[s[i]-'a']++;
            temp.push_back(s[i]);
        }
        for(int i=n;i<=s.length();i++)
        {
            bool ok=true;
            for(int j=0;j<26;j++)
            {
                if(f1[j]!=f2[j]) ok=false;
            }
            if(ok)
                ans.push_back(i-n);
            if(i==s.length()) break;
            temp.erase(temp.begin());
            f2[s[i-n]-'a']--;
            f2[s[i]-'a']++;
            temp.push_back(s[i]);
        }
        return ans;
    }
};

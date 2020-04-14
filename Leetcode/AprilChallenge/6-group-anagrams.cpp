//Day 6 of Leetcode 30 days challenge, by Kartik Mohan
// Group Anagrams
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(auto s: strs)
        {
            string s2=s;
            sort(s2.begin(),s2.end());
            mp[s2].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto m : mp)
        {
            ans.push_back(m.second);
        }
        return ans;
    }
};

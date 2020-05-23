// Day 22 of LeetCode May Challenge, by Kartik Mohan
//  Sort Characters By Frequency
class Solution {
public:
    string frequencySort(string s) {
        if(!s.length()) return "";
        map<char,int> mp;
        for(char c:s) mp[c]++;
        vector<pair<int,char>> v;
        for(auto i: mp)
            v.push_back({i.second,i.first});
        sort(v.begin(),v.end());
        string ans="";
        for(auto i:v)
        {
            int k=i.first;
            while(k--)
                ans+=i.second;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

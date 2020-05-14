// Day 13 of LeetCode May Challenge, by Kartik Mohan
// Remove K Digits
class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans= "";
        for(char &c : num){
            while(ans.size() && ans.back() > c && k){
                ans.pop_back();
                k--;
            }
            if(ans.size() || c != '0')
                ans.push_back(c);
        }
        while(ans.size() && k--){
            ans.pop_back();
        }
        if(ans.length() == 0)
            ans.push_back('0');
        return ans;
    }
};

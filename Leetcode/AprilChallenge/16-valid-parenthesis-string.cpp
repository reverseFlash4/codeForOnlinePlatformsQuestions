//Day 16 of Leetcode 30 days challenge, by Kartik Mohan
// Valid Parenthesis String
class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        stack<pair<char,int>> st;
        stack<pair<char,int>> stars;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                st.push({s[i],i});
            else if(s[i]=='*')
                stars.push({s[i],i});
            else
            {
                if(!st.empty())
                    st.pop();
                else if(!stars.empty())
                    stars.pop();
                else
                    return false;
            }
        }
        while(!st.empty() && !stars.empty())
        {
            if(st.top().second<stars.top().second)
            {
                stars.pop();
                st.pop();
            }
            else
                return false;
        }
        if(st.empty())
            return true;
        return false;
    }
};

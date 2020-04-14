//Day 1 of Leetcode 30 days challenge, by Kartik Mohan
// Counting Elements
class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> us;
        for(auto s:arr)
            us.insert(s);
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(us.find(arr[i]+1)!=us.end())
                c++;
        }
        return c;
    }
};

//Day 14 of Leetcode 30 days challenge, by Kartik Mohan
// Perform String Shifts
class Solution {
public:
    string leftr(string s, int d)
    {
        reverse(s.begin(),s.begin()+d);
        reverse(s.begin()+d,s.end());
        reverse(s.begin(),s.end());
        return s;
    }
    string stringShift(string s, vector<vector<int>>& shift) {
       int n=shift.size();
       for(int i=0;i<n;i++)
       {
           if(shift[i][0]==0)
               s=leftr(s,shift[i][1]);
           else
               s=leftr(s,s.length()-shift[i][1]);
       }
        return s;
    }
};

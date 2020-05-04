//Day 3 of Leetcode May Challenge, by Kartik Mohan
// Ransom Note
// This is the solution which popped in my mind and I coded it within a minute. However this is not the best solution.
// T(n)=O(nlogn) which can be improved by using a hash table. Since the order of the strings do not matter here so hashtable is very efficient
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m=ransomNote.length(),n=magazine.length();
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int i,j=0;
        for(i=0;i<n;i++)
        {
            if(magazine[i]==ransomNote[j]) j++;
        }
        if(j==m) return true;
        return false;
    }
};

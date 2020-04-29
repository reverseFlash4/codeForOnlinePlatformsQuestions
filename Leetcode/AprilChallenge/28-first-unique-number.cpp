//Day 28 of Leetcode 30 days challenge, by Kartik Mohan
// First Unique Number

class FirstUnique {
public:
    unordered_map<int,int> ump;
    queue<int> q;
    FirstUnique(vector<int>& nums) {
        for(int i:nums)
        {
            ump[i]++;
            q.push(i);
        }
    }
    
    int showFirstUnique() {
        while(!q.empty() && ump[q.front()]>1)
            q.pop();
        if(q.empty()) return -1;
        return q.front();
    }
    
    void add(int value) {
        ++ump[value];
        if(ump[value]==1)
            q.push(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */

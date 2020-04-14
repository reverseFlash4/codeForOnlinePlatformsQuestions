//Day 10 of Leetcode 30 days challenge, by Kartik Mohan
// Min Stack
class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> st;
    vector<int> minst;
    MinStack() {
        
    }
    
    void push(int x) {
        if(!minst.size())
            minst.push_back(x);
        else if(minst.back()>=x)
            minst.push_back(x);
        st.push_back(x);
    }
    
    void pop() {
        int t=st.back();
        st.pop_back();
        if(t==minst.back())
            minst.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return minst.back();
    }
};

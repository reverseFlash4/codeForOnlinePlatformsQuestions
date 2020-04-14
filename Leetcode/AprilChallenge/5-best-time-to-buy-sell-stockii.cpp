//Day 5 of Leetcode 30 days challenge, by Kartik Mohan
// Best Time to Buy and Sell Stock II
class Solution {
public:
    const int inf=1e9 + 5;
    int maxProfit(vector<int>& prices) {
        int m_trans=-inf,m_notrans=0;
        for(int i=0;i<prices.size();i++)
        {
            m_trans=max(m_trans,m_notrans-prices[i]);
            m_notrans=max(m_notrans,m_trans+prices[i]);
        }
        return m_notrans;
    }
};

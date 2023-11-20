//Best Time to Buy and Sell Stock II
//Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

T.C - O(n)
S.C - O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int diff = 0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
            {
                diff = diff + prices[i] - prices[i-1];
            }
        }
        return diff;
    }
};
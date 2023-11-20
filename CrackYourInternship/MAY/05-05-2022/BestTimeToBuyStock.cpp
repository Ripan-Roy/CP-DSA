//Best Time to Buy Stock
//Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

Brute Force Solution

T.C - O(n)


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0)
        {
            return 0;
        }
        int max = 0, min = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < min)
            {
                
                min = prices[i];
            }
            else
            {
                if (prices[i] - min > profit)
                {
                    profit = prices[i] - min;
                }       
            }
        }
     return profit;
    }
};
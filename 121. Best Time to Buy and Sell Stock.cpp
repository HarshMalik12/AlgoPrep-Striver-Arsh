// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();
        int maxright = prices[n-1];
        int maxprofit = 0;
        for(int i = n-1; i >= 0; i--)
        {
            maxright = max(prices[i],maxright);
            maxprofit = max(maxprofit , maxright - prices[i]);
        }
        return maxprofit;
    }
};

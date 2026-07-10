class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int in=1;in<prices.size();in++)
        {
            if(prices[in]>prices[in-1])
            {
                profit+=prices[in]-prices[in-1];
            }
        }
        return profit;
    }
};
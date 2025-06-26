// Last updated: 6/27/2025, 2:30:37 AM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0];
        int maxProfit = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > bestBuy){
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            if(prices[i] < bestBuy){
                bestBuy = prices[i];
            }
        }
        return maxProfit;
    }
};
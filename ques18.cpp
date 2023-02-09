// Best time to buy and sell stocks
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = INT_MIN;
        int profit = 0;
        for(int i=prices.size()-1; i>=0; i--){
            m = max(m,prices[i]);
            profit = max(profit,m-prices[i]);
        }
        return profit;
    }
};
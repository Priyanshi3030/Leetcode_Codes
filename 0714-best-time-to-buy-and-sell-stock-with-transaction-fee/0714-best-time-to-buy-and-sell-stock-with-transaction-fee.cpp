class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int value = INT_MIN , final = 0;
        int n = prices.size();
        for(int i = 0 ; i < n ; i++) {
            value = max(value,final - prices[i]);
            final = max(final , value + prices[i]-fee);
        } 
        return final;
    
    }
};
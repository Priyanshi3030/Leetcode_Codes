class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int Minprice=prices[0];
    int profit=INT_MIN;
    for(int i=0;i<prices.size();i++){
         if(prices[i]<Minprice){
             Minprice=prices[i];
         }
         profit=max(profit,prices[i]-Minprice);
    }
    return profit;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_prize = prices[0], max_profit = 0;
        for( int i =1;i<prices.size();i++){
            if(prices[i]<min_prize)
                min_prize = prices[i];
            if(prices[i] - min_prize > max_profit)
                max_profit = prices[i] - min_prize ;
        }
        return max_profit;
    }
};

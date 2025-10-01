class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int ans = numBottles;  
        while(numBottles >= numExchange) {
            int curr = numBottles / numExchange;

            ans += curr;
            numBottles = curr + ( numBottles % numExchange);

        }

        
        return ans; 
    }
};

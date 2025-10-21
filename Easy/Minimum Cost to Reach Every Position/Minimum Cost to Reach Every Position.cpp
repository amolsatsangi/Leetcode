class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        for(int i=1;i<cost.size();i++){
            if(cost[i]>cost[i-1]){
                cost[i]=cost[i-1];
            }
        }
        return cost;
    }
};

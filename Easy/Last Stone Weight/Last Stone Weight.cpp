class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int i{0}, n = stones.size();
        sort(stones.begin(),stones.end());
        while(stones.size()!=1){
            int temp = stones[n-i-1]-stones[n-i-2];
            stones.pop_back();
            stones.pop_back();
            stones.push_back(temp);
            sort(stones.begin(),stones.end());
            i++;
        }
    return stones[0];
    }
};

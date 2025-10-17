class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int total_weight = n*n*w;
        if(total_weight>maxWeight)
            return maxWeight/w;
        else 
            return n*n;
    }
};

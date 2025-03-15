class Solution {
public:
    int minPartitions(string n) {
        int maxi{INT_MIN};
        for(auto c: n){
            int temp = c-'0';
            maxi = max(temp,maxi);
        }
        return maxi;
    }
};

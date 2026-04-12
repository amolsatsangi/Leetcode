class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int dist{INT_MAX};
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            for(int j=n-1;j>i;j--){
                if(nums[i]==nums[j]){
                    dist = min(dist,abs(i-j)*2);
                }
                if(dist!=)
            }
        }
        return dist==INT_MAX?-1:dist;
    }
};

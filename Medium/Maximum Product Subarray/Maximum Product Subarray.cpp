class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi{INT_MIN};
        int prefix{1},suffix{1};
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            prefix==0?prefix = 1:prefix;
            suffix==0?suffix = 1:suffix;

            prefix *= nums[i];
            suffix *= nums[n-i-1];

            maxi = max(maxi, max(prefix,suffix));
        }
    return maxi;
    }
};

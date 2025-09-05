class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum{0};
        int k{0};
        for(int i=0;i<nums.size();i++){
            k = max(0,i-nums[i]);
            for(int j=k;j<=i;j++){
                sum+=nums[j];
            }
        }
    return sum;
    }
};

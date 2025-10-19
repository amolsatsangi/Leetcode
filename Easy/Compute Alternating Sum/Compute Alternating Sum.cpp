class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum{0};
        for(int i=0;i<nums.size();i++){
            sum = i%2==0? (nums[i]+sum):(sum-nums[i]);
        }
    return sum;
    }
};

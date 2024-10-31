class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int XOR_sum{1};
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                XOR_sum = XOR_sum ^ (nums[i]^nums[j]);
            }
        }
    return XOR_sum;
    }
};

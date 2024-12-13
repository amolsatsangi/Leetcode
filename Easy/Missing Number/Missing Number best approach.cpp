class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor_num1{0}, xor_num2{0};
        for(int i=0;i<nums.size();i++){
             xor_num1=xor_num1^nums[i];
             xor_num2=xor_num2^i;
        }
        return  xor_num1^xor_num2^nums.size();
    }
};

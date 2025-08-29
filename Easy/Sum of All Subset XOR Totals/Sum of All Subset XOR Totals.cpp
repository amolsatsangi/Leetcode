class Solution {
public:
    void generate(vector<int>& nums,int xor_sum,int i,int & sum){
        if(i==nums.size()){
            sum = sum+xor_sum;
            return;
        }
        generate(nums,xor_sum,i+1,sum);
        xor_sum = xor_sum^nums[i];
        generate(nums,xor_sum,i+1,sum);
    }
    int subsetXORSum(vector<int>& nums) {
       int xor_sum{0},sum{0};
       generate(nums,xor_sum,0,sum);
    return sum;
    }
};

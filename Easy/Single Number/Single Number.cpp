class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor_ans{0};
        for(int i=0;i<nums.size();i++)
            xor_ans^=nums[i];
        return xor_ans;
    }
};

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long int XOR{0};
        for(int i=0;i<nums.size();i++)
            XOR ^= nums[i];
        long int rightBit = (XOR & (XOR-1)) ^XOR;
        int xor1{0}, xor2{0};
        for(int i=0;i<nums.size();i++){
            if(nums[i] & rightBit)
                xor1 ^= nums[i];
            else
                xor2 ^= nums[i];
        }
        if(xor1 < xor2)
            return {xor1,xor2};
        return {xor2,xor1};
    }
};

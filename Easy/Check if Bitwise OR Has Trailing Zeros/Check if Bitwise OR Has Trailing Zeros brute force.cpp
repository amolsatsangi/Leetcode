class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(int(nums[i]|nums[j])%2 ==0)
                    return true;
            }
        }
    return false;
    }
};

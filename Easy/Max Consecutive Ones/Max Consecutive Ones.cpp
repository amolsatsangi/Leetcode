class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max{0}, local{0};
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                max = max<local?local:max;
                local =0;
                continue;
            }
            local++;
        }
        max = max<local?local:max;
        return max;
    }
};

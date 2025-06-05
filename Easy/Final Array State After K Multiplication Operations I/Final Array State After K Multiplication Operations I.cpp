class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int mini{INT_MAX};
            vector<int> index;
            for(int j=0;j<nums.size();j++){
                    mini = min(mini,nums[j]);
            }
            for(int j=0;j<nums.size();j++){
                if(nums[j]==mini){
                    nums[j]*=multiplier;
                    break;
                }
            }
        }
    return nums;
    }
};

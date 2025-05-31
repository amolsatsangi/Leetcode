class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxi{INT_MIN},mini{INT_MAX};
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi, nums[i]);
            mini = min(mini,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=maxi && nums[i]!=mini)
                return nums[i];
        }
    return -1;
    }
};

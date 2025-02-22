class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool state{true}, not_sure{false};
        if(nums.size()==1)
            return true;
        if(nums[0]>nums[1])
            state = false;
        else if(nums[0]<nums[1])
            state = true;
        else
            not_sure = true;
        for(int i=0;i<nums.size()-1;i++){
            if(not_sure){
                bool tflag{false};
                if(nums[i]>nums[i+1]){
                    state = false;
                    tflag=true;
                }
                else if(nums[i]<nums[i+1]){
                    state = true;
                    tflag=true;
                }
                if(tflag)
                    not_sure=false;
            }
            else if(state && nums[i]>nums[i+1])
                return false;
            else if(!state && nums[i]<nums[i+1])
                return false;
        }
    return true;
    }
};

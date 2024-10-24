class Solution {
public:
    bool check(vector<int>& nums) {
        for(int i=0; i<nums.size();i++){
            if(i!=nums.size()-1 && nums[i]>nums[i+1]){
                i++;
                while(i<nums.size()){
                    if(nums[i]>nums[0])
                        return false;
                    else if(i!=nums.size()-1 && nums[i]>nums[i+1])
                        return false;
                    i++;
                }       
            }
        }
        return true;
    }
};

class Solution {
public: 
    int calculate(vector<int>& nums,int n){
        if(n==0)
            return nums[n];
        if(n<0)
            return 0;
        int pick = nums[n]+calculate(nums,n-2);
        int not_pick = calculate(nums,n-1);
        return max(pick,not_pick);
    }
    int rob(vector<int>& nums) {
        return calculate(nums,nums.size()-1);
    }
};

class Solution {
public: 
    int calculate(vector<int>& nums,int n,vector<int>& dp){
        if(n==0)
            return dp[0]=nums[0];
        if(n<0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        int pick = nums[n]+calculate(nums,n-2,dp);
        int not_pick = calculate(nums,n-1,dp);
        return dp[n]=max(pick,not_pick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return calculate(nums,nums.size()-1,dp);
    }
};

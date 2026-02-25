class Solution {
public:
    int houseRobber(vector<int>& money,int start,int n,vector<int>& dp){
        if(start == n)
            return dp[n] = money[start];
        if(n<start)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        int used_n = houseRobber(money,start,n-2,dp)+money[n];
        int not_used_n = houseRobber(money,start,n-1,dp);
        return dp[n] = max(used_n,not_used_n);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        vector<int> dp1(nums.size(),-1);
        vector<int> dp2(nums.size(),-1);
        return max(houseRobber(nums,0,nums.size()-2,dp1),houseRobber(nums,1,nums.size()-1,dp2));
    }
};

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
        vector<int> dp1(nums.size()-1,-1);
        vector<int> dp2(nums.size(),-1);
        for(int i=0;i<nums.size()-1;i++){
            int used_n = nums[i];
            if(i-2>=0)
                used_n += dp1[i-2];
            int not_used_n{INT_MIN};
            if(i-1>=0)
            not_used_n = dp1[i-1];
            dp1[i] = max(used_n,not_used_n);
        }
        for(int i=1;i<nums.size();i++){
            int used_n = nums[i];
            if(i-2>=1)
                used_n += dp2[i-2];
            int not_used_n{INT_MIN};
            if(i-1>=1)
            not_used_n = dp2[i-1];
            dp2[i] = max(used_n,not_used_n);
        }
    return max(dp1[dp1.size()-1],dp2[dp2.size()-1]);
    }
};

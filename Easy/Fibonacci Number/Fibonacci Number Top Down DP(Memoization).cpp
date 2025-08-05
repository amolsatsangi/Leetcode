class Solution {
public: 
    int MDP(int n,vector<int> &dp){
        if(n<=1)
            return n;
        if(dp[n]!=-1)  
            return dp[n];
        return dp[n] = MDP(n-1,dp)+MDP(n-2,dp);
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        int ans = MDP(n,dp);
        return ans;
    }
};

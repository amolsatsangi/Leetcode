class Solution {
public:
    int calculate_unique_paths(int m,int n,vector<vector<int>> & dp){
        if(m<0 || n<0)
            return 0;
        if(dp[m][n]!=-1)
            return dp[m][n];
        if(m==0 && n ==0)
            return 1;
        else if(m==0){
            return calculate_unique_paths(0,n-1,dp);
        }
        else if(n==0){
            return calculate_unique_paths(m-1,0,dp);
        }
        return dp[m][n]=calculate_unique_paths(m,n-1,dp)+calculate_unique_paths(m-1,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return calculate_unique_paths(m-1,n-1,dp);
    }
};

class Solution {
public:
    int calculate_uniqe_paths(vector<vector<int>>& obstacleGrid,int m,int n,vector<vector<int>>& dp){
        if(m<0 || n<0)
            return 0;
        if(dp[m][n]!=-1)
            return dp[m][n];
        if(obstacleGrid[m][n]!=0)
            return 0;
        if(m==0 && n==0 && obstacleGrid[m][n]==0)
            return 1;
        if(m==0){
            calculate_uniqe_paths(obstacleGrid,0,n-1,dp);
        }
        else if(n==0){
            calculate_uniqe_paths(obstacleGrid,m-1,0,dp);
        }
        return dp[m][n]=calculate_uniqe_paths(obstacleGrid,m,n-1,dp)+calculate_uniqe_paths(obstacleGrid,m-1,n,dp);

    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size()-1;
        int n = obstacleGrid[0].size()-1;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return calculate_uniqe_paths(obstacleGrid,m,n,dp);
    }
};

class Solution {
public:
    int path_sum(vector<vector<int>>& matrix,int m,int n, vector<vector<int>>& dp){
        if(dp[m][n]!=-1)
            return dp[m][n];
        if(m==0){
            return dp[0][n]=matrix[0][n];
        }
        int up{INT_MAX},left{INT_MAX},right{INT_MAX};
        if(m>0){
            up = path_sum(matrix,m-1,n,dp);
        }
        if(m>0 && n>0){
            left = path_sum(matrix,m-1,n-1,dp);
        }
        if(m>0 && n<matrix.size()-1){
            right = path_sum(matrix,m-1,n+1,dp);
        }
        return dp[m][n]=matrix[m][n]+min(up,min(left,right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        int mini{INT_MAX};
        for(int i=0;i<matrix.size();i++){
            int sum = path_sum(matrix,n-1,i,dp);
            mini = min(mini,sum);
        }
        return mini;
    }
};

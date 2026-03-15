class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        int mini{INT_MAX};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0){
                    dp[i][j]=matrix[i][j];
                    if(i==n-1){
                    mini = min(mini,dp[i][j]);
                    }
                    continue;
                }
                int left{INT_MAX},up{INT_MAX},right{INT_MAX};
                if(i>0){
                    up = dp[i-1][j];
                }
                if(i>0 && j>0){
                    left = dp[i-1][j-1];
                }
                if(i>0 && j<n-1){
                    right = dp[i-1][j+1];
                }
                dp[i][j] = matrix[i][j]+min(up,min(left,right));
                if(i==n-1){
                    mini = min(mini,dp[i][j]);
                }
            }
        }
        return mini;
    }
};

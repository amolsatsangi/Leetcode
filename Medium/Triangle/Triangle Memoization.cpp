class Solution {
public:
    int path_sum(vector<vector<int>>& triangle,int m,int n,vector<vector<int>>& dp){
        if(m<0 || n<0)
            return INT_MAX;
        if(dp[m][n]!=-1)
            return dp[m][n];
        if(m==0)
            return dp[m][n]=triangle[0][0];
        int first{INT_MAX}, second{INT_MAX};
        if(n>0){
            first =  path_sum(triangle,m-1,n-1,dp);
        }
        if(n<triangle[m].size()-1){
            second = path_sum(triangle,m-1,n,dp);
        }
        return dp[m][n]=triangle[m][n]+min(first,second);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        int mini{INT_MAX};
        for(int i=0;i<n;i++){
            int sum = path_sum(triangle,n-1,i,dp);
            mini = min(mini,sum);
        }
        return mini;
    }
};

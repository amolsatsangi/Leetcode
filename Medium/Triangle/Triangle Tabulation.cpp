class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int mini{INT_MAX};
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i=0;i<triangle.size();i++){
            for(int j=0;j<triangle[i].size();j++){
                int sum{0};
                if(i==0 && j==0){
                    dp[i][j]=triangle[i][j];
                 if(i==triangle.size()-1)
                    mini = min(mini,dp[i][j]);
                    continue;
                }
                int first{INT_MAX},second{INT_MAX};
                if(j>0){
                    first = dp[i-1][j-1];
                }
                if(j<triangle[i].size()-1){
                    second = dp[i-1][j];
                }
                sum = triangle[i][j]+min(first,second);
                dp[i][j]=sum;
                if(i==triangle.size()-1)
                    mini = min(mini,sum);
            }
        }
        return mini;
    }
};

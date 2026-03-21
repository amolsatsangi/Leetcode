class Solution {
public:
    int max_path(vector<vector<vector<int>>>& dp,int i,int j1,int j2,vector<vector<int>>& grid,int m,int n){
        if(j1<0 || j1>=n || j2<0 || j2>=n){
            return -1e9;
        }
        if(dp[i][j1][j2]!=-1)
            return dp[i][j1][j2];
        if(i==m-1){
            if(j1==j2)
                return dp[i][j1][j2]= grid[i][j1];
            else
                return dp[i][j1][j2] = grid[i][j1]+grid[i][j2];
        }
        int maxi{INT_MIN};
        for(int di=-1;di<=1;di++){
            for(int dj=-1;dj<=1;dj++){
                int ans{INT_MIN};
                if(j1==j2){
                    ans = grid[i][j1]+max_path(dp,i+1,j1+di,j2+dj,grid,m,n);
                }
                else{
                    ans = grid[i][j1]+grid[i][j2]+max_path(dp,i+1,j1+di,j2+dj,grid,m,n);
                }
                maxi = max(maxi,ans);
                
            }
        }
        return dp[i][j1][j2] = maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>> dp (m,vector<vector<int>>(n,vector<int>(n,-1)));
        return max_path(dp,0,0,n-1,grid,m,n);
    }
};

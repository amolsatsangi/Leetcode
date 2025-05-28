class Solution {
public:
    int BFS(vector<vector<int>>& vis, vector<vector<int>>& grid,queue<pair<int,int>>&q){
        int count{-1};
        while(!q.empty()){
            int size = q.size();
            for(int k=0;k<size;k++){
                auto node = q.front();
                q.pop();
                int i = node.first, j = node.second;
                vis[i][j]=2;
                if(i-1>=0 && vis[i-1][j]==0 && grid[i-1][j]==1){
                    vis[i-1][j]=2;
                    q.push({i-1,j});
                }
                if(j-1>=0 && vis[i][j-1]==0 && grid[i][j-1]==1){
                    vis[i][j-1]=2;
                    q.push({i,j-1});
                }
                if(j+1<grid[0].size() && vis[i][j+1]==0 && grid[i][j+1]==1){
                    vis[i][j+1]=2;
                    q.push({i,j+1});
                }
                if(i+1<grid.size() && vis[i+1][j]==0 && grid[i+1][j]==1){
                    vis[i+1][j]=2;
                    q.push({i+1,j});
                }
            }
            count++;
        }
        return count==-1?0:count;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size()));
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    vis[i][j]=2;
                }
            } 
        }
        int count = BFS(vis,grid,q);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1 && vis[i][j]==0)
                    return -1;
            }
        }
        return count;
    }
};

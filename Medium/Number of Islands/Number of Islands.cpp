class Solution {
public:
    void BFS(vector<vector<char>> &grid, vector<vector<int>> &vis, pair<int,int> start){
        queue<pair<int,int>> q;
        q.push(start);
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            vis[node.first][node.second]=1;
            int i = node.first, j = node.second;
            if(i-1>=0 && vis[i-1][j]==0 && grid[i-1][j]=='1'){
                vis[i-1][j]=1;
                q.push({i-1,j});
            }
            if(j-1>=0 && vis[i][j-1]==0 && grid[i][j-1]=='1'){
                vis[i][j-1]=1;
                q.push({i,j-1});
            }
            if(j+1<grid[0].size() && vis[i][j+1] == 0 && grid[i][j+1]=='1'){
                vis[i][j+1]=1;
                q.push({i,j+1});
            }
            if(i+1<grid.size() && vis[i+1][j]==0 && grid[i+1][j]=='1'){
                vis[i+1][j]=1;
                q.push({i+1,j});
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count{0};
        vector<int> row(grid[0].size());
        vector<vector<int>> vis(grid.size(),row);
         for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1' && vis[i][j]!=1){
                    BFS(grid,vis,{i,j});
                    count++;
                }
            }
         }
    return count;
    }
};

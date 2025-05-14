class Solution {
public:
    void BFS(vector<vector<int>>& grid,vector<vector<int>>& vis, queue<pair<int,int>> q){
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            int i = node.first, j = node.second;
            vis[i][j]=1;
            if(i-1>=0 && grid[i-1][j]==1 && vis[i-1][j]==0){
                vis[i-1][j]=1;
                q.push({i-1,j});
            }
            if(j-1>=0 && grid[i][j-1]==1 && vis[i][j-1]==0){
                vis[i][j-1]=1;
                q.push({i,j-1});
            }
            if(j+1<grid[0].size() && grid[i][j+1]==1 && vis[i][j+1]==0){
                vis[i][j+1]=1;
                q.push({i,j+1});
            }
            if(i+1<grid.size() && grid[i+1][j]==1 && vis[i+1][j]==0){
                vis[i+1][j]=1;
                q.push({i+1,j});
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size()));
        queue<pair<int,int>> q;
        for(int i=0;i<grid[0].size();i++){
            if(grid[0][i]==1)  
                q.push({0,i});
        
        }
        int j = grid.size()-1;
        if(j!=0){
            for(int i=0;i<grid[0].size();i++){
            if(grid[j][i]==1)  
                q.push({j,i});
        
        }
        }
        for(int i=1;i<grid.size()-1;i++){
            cout<<i<<" "<<j<<endl;
            if(grid[i][0]==1)  
                q.push({i,0});
        
        }
        j = grid[0].size()-1;
        if(j!=0){
            for(int i=1;i<grid.size()-1;i++){
            if(grid[i][j]==1)  
                q.push({i,j});
            }
        }
        BFS(grid,vis,q);
        int count{0};
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1 && vis[i][j]==0)
                    count++;
            }
        }
    return count;
    }
};

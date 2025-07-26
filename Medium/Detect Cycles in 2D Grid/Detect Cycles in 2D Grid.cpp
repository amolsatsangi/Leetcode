class Solution {
public:
    bool detect(vector<vector<char>>& grid,vector<vector<char>>& vis,pair<int,int> p){
        queue<pair<pair<int,int>,pair<int,int>>> q;
        q.push({p,{-1,-1}});
        while(!q.empty()){
            auto node = q.front();
            int i = node.first.first;
            int j = node.first.second;
            auto parent = node.second;
            vis[i][j]=grid[i][j];
            q.pop();
            if(i-1>=0 && grid[i-1][j]==grid[i][j] && vis[i-1][j]=='0'){
                q.push({{i-1,j},{i,j}});
                vis[i-1][j]= grid[i][j];
            }
            else if(i-1>=0 && grid[i-1][j]==grid[i][j] && vis[i-1][j]==grid[i][j] && (i-1!=parent.first || j!=parent.second)){
                return true;
            }
            if(j-1>=0 && grid[i][j-1]==grid[i][j] && vis[i][j-1]=='0'){
                q.push({{i,j-1},{i,j}});
                vis[i][j-1]= grid[i][j];
            }
            else if(j-1>=0 && grid[i][j-1]==grid[i][j] && vis[i][j-1]==grid[i][j] && (j-1!=parent.second|| i!=parent.first)){
                return true;
            }
            if(j+1<grid[i].size() && grid[i][j+1]==grid[i][j] && vis[i][j+1]=='0'){
                q.push({{i,j+1},{i,j}});
                vis[i][j+1]= grid[i][j];
            }
            
            else if(j+1<grid[i].size() && grid[i][j+1]==grid[i][j] && vis[i][j+1]==grid[i][j] && (j+1!=parent.second || i!=parent.first)){
                return true;
            }
            if(i+1<grid.size() && grid[i+1][j]==grid[i][j] && vis[i+1][j]=='0'){
                q.push({{i+1,j},{i,j}});
                vis[i+1][j]= grid[i][j];
            }
            else if(i+1<grid.size() && grid[i+1][j]==grid[i][j] && vis[i+1][j]==grid[i][j] && (i+1!=parent.first|| j!=parent.second)){
                return true;
            } 
        }
        return false;
    }
    void print_matrix(vector<vector<char>>& vis){
        for(int i=0;i<vis.size();i++){
            for(int j=0;j<vis[i].size();j++){
                cout<<vis[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    bool containsCycle(vector<vector<char>>& grid) {
        vector<char> row(grid[0].size(),'0');
        vector<vector<char>> vis(grid.size(),row);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(vis[i][j]=='0'){
                    if(detect(grid,vis,{i,j}))
                        return true;
                }
            }
        }
    return false;
    }
};

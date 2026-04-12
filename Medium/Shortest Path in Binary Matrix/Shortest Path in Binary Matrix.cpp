class Solution {
public:
    void mark_neighbours(int row,int col,vector<vector<int>>& grid,vector<vector<int>>& dis,queue<pair<int,int>>& q,int m, int n,pair<int,int> node){
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                if(i==0 && j==0)
                    continue;
                else if(row+i>=0 && row+i<m && col+j>=0 &&  col+j<n && grid[row+i][col+j]==0){
                    if(dis[row+i][col+j]>dis[node.first][node.second]+1){
                        dis[row+i][col+j]=dis[node.first][node.second]+1;
                        q.push({row+i,col+j});
                    }
                }
            }
        }
        
    }

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)
            return -1;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dis(m,vector<int>(n,1e9));
        queue<pair<int,int>> q;
        q.push({0,0});
        dis[0][0]=1;
        while(!q.empty()){
            pair<int,int> node = q.front();
            q.pop();
            int i = node.first;
            int j = node.second;
            mark_neighbours(i,j,grid,dis,q,m,n,node);

        }
        return dis[m-1][n-1]==1e9?-1:dis[m-1][n-1];
    }
};

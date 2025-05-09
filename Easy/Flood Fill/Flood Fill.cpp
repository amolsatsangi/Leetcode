class Solution{
    public:
    void BFS(vector<vector<int>> & image,int sr,int sc,int newColor, vector<vector<int>> & vis,int color){
        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc]=newColor;
        vis[sr][sc]=1;
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            vis[node.first][node.second]=1;
            int i = node.first, j = node.second;
            if(i-1>=0 && vis[i-1][j]!=1 && image[i-1][j]==color ){
                vis[i-1][j]=1;
                image[i-1][j] = newColor;
                q.push({i-1,j});
            }
            if(j-1>=0 && vis[i][j-1]!=1 && image[i][j-1]==color  ) {
                vis[i][j-1]=1;
                image[i][j-1] = newColor;
                q.push({i,j-1});
            }
            if(j+1<image[0].size() && vis[i][j+1]!=1 && image[i][j+1]==color ){
                vis[i][j+1]=1;
                image[i][j+1] = newColor;
                q.push({i,j+1});
            }
            if(i+1<image.size() && vis[i+1][j]!=1 && image[i+1][j]==color ){
                vis[i+1][j]=1;
                image[i+1][j] = newColor;
                q.push({i+1,j});
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image,int sr, int sc, int newColor) {
        vector<int> row(image[0].size());
        vector<vector<int>> vis(image.size(),row);
        BFS(image, sr,sc,newColor,vis,image[sr][sc]);
        return image;
    }
};

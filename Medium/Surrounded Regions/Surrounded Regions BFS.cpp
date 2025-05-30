class Solution {
public:
    void BFS(vector<vector<char>> &mat,vector<vector<int>> &vis,pair<int,int> start){
        queue<pair<int,int>> q;
        q.push(start);
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            int i = node.first, j =node.second;
            //vis[i][j]=1;
            if(i-1>=0 && mat[i-1][j]=='O' && vis[i-1][j]==0){
                vis[i-1][j]=1;
                q.push({i-1,j});
            }
            if(j-1>=0 && mat[i][j-1]=='O' && vis[i][j-1]==0){
                vis[i][j-1]=1;
                q.push({i,j-1});
            }
            if(j+1<mat[0].size() && mat[i][j+1]=='O' && vis[i][j+1]==0){
                vis[i][j+1]=1;
                q.push({i,j+1});
            }
            if(i+1<mat.size() && mat[i+1][j]=='O' && vis[i+1][j]==0){
                vis[i+1][j]=1;
                q.push({i+1,j});
            }
        }
    }   
    void solve(vector<vector<char>>& board) {
        if(board.size()==1 || board[0].size()==1)
            return;
        vector<vector<int>> vis(board.size(),vector<int>(board[0].size(),0));
       for(int i=0;i<board.size();i=i+board.size()-1){
        for(int j=0;j<board[i].size();j++){
            if(board[i][j]=='O'){
                vis[i][j]=1;
                BFS(board,vis,{i,j});
            }
        }
       }
       for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j=j+board[i].size()-1){
            if(board[i][j]=='O'){
                vis[i][j]=1;
                BFS(board,vis,{i,j});
            }
        }
       }
       //print_matrix(vis);
       for(int i=1;i<board.size()-1;i++){
        for(int j=1;j<board[0].size()-1;j++){
            if(board[i][j]=='O' && vis[i][j]!=1)
                board[i][j]='X';
        }
       }

    }
};

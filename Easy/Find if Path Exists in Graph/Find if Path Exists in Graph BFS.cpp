class Solution {
public:
    void BFS(vector<vector<int>> & adj_list,vector<int> & vis,int source){
        vis[source] = 1;
        queue<int> q;
        q.push(source);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto i : adj_list[node]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>> adj_list(n);
        for(int i=0;i<edges.size();i++){
            adj_list[edges[i][0]].push_back(edges[i][1]);
            adj_list[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n,0);
        BFS(adj_list,vis,source);
    return vis[destination]==1?true:false;
    }
};

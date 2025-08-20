class Solution {
public:
    void DFS(vector<vector<int>> & adj_list,vector<int> & vis,int source){
        if(vis[source]==1)
            return;
        vis[source]=1;
        for(int i=0;i<adj_list[source].size();i++){
            if(!vis[adj_list[source][i]])
                DFS(adj_list,vis,adj_list[source][i]);
        }
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>> adj_list(n);
        for(int i=0;i<edges.size();i++){
            adj_list[edges[i][0]].push_back(edges[i][1]);
            adj_list[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n,0);
        DFS(adj_list,vis,source);
    return vis[destination]==1?true:false;
    }
};

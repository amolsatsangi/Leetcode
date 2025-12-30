class Solution {
public:
    bool DFS(vector<vector<int>>& graph,int node,vector<int> & vis,vector<int> & path){
        vis[node]=1;
        path[node]=1;
        for(auto i:graph[node]){
            if(path[i])
                return true;
            else if(vis[i]==0){
                if(DFS(graph,i,vis,path))
                    return true;
            }
        }
        path[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> vis(V,0);
        vector<int> path(V,0);
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(!DFS(graph,i,vis,path)){
                ans.push_back(i);
            }
        }
    return ans;
    }
};

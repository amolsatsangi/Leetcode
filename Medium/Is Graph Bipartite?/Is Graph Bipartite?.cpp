class Solution {
public:
    bool BFS(vector<vector<int>>& graph,vector<int> & vis,int node){
        queue<int> q;
        q.push(node);
        vis[node]=0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int i:graph[node]){
                if(vis[i]==-1){
                    vis[i]=!vis[node];
                    q.push(i);
                }
                else if(vis[i]==vis[node])
                    return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> vis(V,-1);
        for(int i=0;i<V;i++){
            if(vis[i]==-1){
                if(!BFS(graph,vis,i))
                    return false;
            }
        }
        return true;
    }
};

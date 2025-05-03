class Solution {
public:
    void make_adj_list(vector<vector<int>> & adj_list,int n, vector<vector<int>>& edges){
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
    }
    vector<int> BFS(vector<int> & visited,int n,vector<vector<int>> & adj_list,int start){
        queue<int> q;
        vector<int> vis;
        q.push(start);
        while(!q.empty()){
                int node = q.front();
                q.pop();
                visited[node]=1;
                vis.push_back(node);
                int node_size = adj_list[node].size();
                for(int i=0;i<node_size;i++){
                    if(!visited[adj_list[node][i]]){
                        q.push(adj_list[node][i]);
                        visited[adj_list[node][i]]=1;
                    }
            }
        }
    return vis;
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> visited(n,0);
        vector<vector<int>> adj_list(n);
        make_adj_list(adj_list,n,edges);
        int count{0};
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                vector<int> mvis = BFS(visited,n,adj_list,i);
                int visnodes = mvis.size();
                bool flag{true};
                for(int j=0;j<mvis.size();j++){
                    if(adj_list[mvis[j]].size()+1!=visnodes){
                        flag = false;
                        break;
                    }
                }
                if(flag)
                    count++;
            }
        }
        return count;
    }
};

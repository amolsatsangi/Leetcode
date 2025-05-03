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
    void DFS(vector<int> & visited,int n,vector<vector<int>> & adj_list,int start,vector<int> &dfs){
        visited[start]=1;
        dfs.push_back(start);
        for(auto i: adj_list[start]){
            if(visited[i]==0){
                DFS(visited,n,adj_list,i,dfs);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> visited(n,0);
        vector<vector<int>> adj_list(n);
        make_adj_list(adj_list,n,edges);
        int count{0};
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                vector<int> mvis;
                DFS(visited,n,adj_list,i,mvis);
                for(int i=0;i<mvis.size();i++){
                    cout<<mvis[i]<<" ";
                }
                cout<<endl;
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

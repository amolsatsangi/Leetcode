class Solution {
public:
    void make_adj_list(vector<vector<int>>& isConnected,vector<vector<int>>& adj_list){
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j] && i!=j){
                    adj_list[i].push_back(j);
                    adj_list[j].push_back(i);
                }
            }
        }
    }
    void DFS(vector<vector<int>> & adj_list,vector<int>& visited, int start){
        visited[start] = 1;
        for(auto i : adj_list[start]){
            if(!visited[i]){
                visited[start] = 1;
                DFS(adj_list,visited, i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count{0};
        vector<vector<int>> adj_list(isConnected.size());
        make_adj_list(isConnected,adj_list);
        vector<int> visited(isConnected.size());
        for(int i=0;i<visited.size();i++){
            if(!visited[i]){
                count++;
                DFS(adj_list,visited, i);
            }
        }
    return count;
    }
};

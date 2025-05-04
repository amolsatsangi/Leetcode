class Solution {
public:
    void make_adj_list(vector<vector<int>>& isConnected,vector<vector<int>>& adj_list){
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j] && i!=j){
                    adj_list[i].push_back(j);
                }
            }
        }
    }
    void BFS(vector<vector<int>> & adj_list,vector<int>& visited, int start){
        queue<int> q;
        visited[start] = 1;
        q.push(start);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto i: adj_list[node]){
                if(!visited[i])
                    q.push(i);
                visited[i]=1;
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
                BFS(adj_list,visited, i);
            }
        }
    return count;
    }
};

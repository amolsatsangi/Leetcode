class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();
        vector<vector<int>> effort(m,vector<int>(n,1e9));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        effort[0][0]=0;
        pq.push({0,{0,0}});
        vector<int> rows{-1,0,0,1};
        vector<int> cols{0,-1,1,0};
        while(!pq.empty()){
            auto node = pq.top();
            int node_eff = node.first;
            int node_row = node.second.first;
            int node_col = node.second.second;
            pq.pop();
            if(node_row==m-1 && node_col == n-1){
                return effort[m-1][n-1];
            }
            for(int i = 0;i<rows.size();i++){
                int new_row = node_row+rows[i];
                int new_col = node_col+cols[i];
                if(new_row>=0 && new_row<m && new_col>=0 && new_col<n){
                    int diff = abs(heights[node_row][node_col]-heights[new_row][new_col]);
                    int new_efft = max(diff,node_eff);
                    if(new_efft<effort[new_row][new_col]){
                        effort[new_row][new_col] = new_efft;
                        pq.push({new_efft,{new_row,new_col}});
                    }
                }
            }
        }
        return 0;
    }
};

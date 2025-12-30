class Solution {
public:
    void show_matrix(vector<vector<int>>&  adj_list){
        for(int i=0;i<adj_list.size();i++){
            for(int j=0;j<adj_list[i].size();j++){
                cout<<adj_list[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void create_adj_list(vector<vector<int>>& prerequisites,vector<vector<int>>& adj_list){
        for(int i=0;i<prerequisites.size();i++){
            adj_list[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
    }
    bool DFS(vector<vector<int>>& adj_list,int node,vector<int> & vis,vector<int> & path,stack<int> &st){
        vis[node]=1;
        path[node]=1;
        for(auto i:adj_list[node]){
            if(path[i])
                return true;
            else if(vis[i]==0){
                if(DFS(adj_list,i,vis,path,st)){
                    return true;
                }
            }
        }
        path[node]=0;
        st.push(node);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> vis(numCourses,0);
        vector<int> path(numCourses,0);
        vector<vector<int>> adj_list(numCourses,vector<int>(0));
        create_adj_list(prerequisites,adj_list);
        //show_matrix(adj_list);
        stack<int> st;
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(DFS(adj_list,i,vis,path,st))
                    return {};
            }
        }
        vector<int> ans;
        while(!st.empty()){
            int i = st.top();
            st.pop();
            ans.push_back(i);
        }
        return ans;
    }
};

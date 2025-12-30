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
    bool DFS(vector<vector<int>>& adj_list,int node,vector<int> & vis,vector<int>& pathvis){
        vis[node]=1;
        pathvis[node]=1;
        for(auto i:adj_list[node]){
            if(pathvis[i])
                return true;
            else if(vis[i]==0){
                if(DFS(adj_list,i,vis,pathvis))
                    return true;
            }
        }
        pathvis[node]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj_list(numCourses,vector<int>(0));
        for(int i=0;i<prerequisites.size();i++){
            adj_list[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        //show_matrix(adj_list);
        vector<int> vis(numCourses,0), pathvis(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(DFS(adj_list,i,vis,pathvis))
                    return false;
            }
        }
        return true;
    }
};

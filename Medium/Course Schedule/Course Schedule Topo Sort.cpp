class Solution {
public:

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses,vector<int>(0));
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int> inDegree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto j:adj[i]){
                inDegree[j]++;
            }
        }
        queue<int> q;
        for(int i=0;i<inDegree.size();i++){
            if(inDegree[i]==0){
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto i:adj[node]){
                inDegree[i]--;
                if(inDegree[i]==0)
                    q.push(i);
            }
        }
        if(topo.size()==numCourses)
            return true;
        return false;
    }
};

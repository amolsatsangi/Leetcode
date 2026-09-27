class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int> dis;
        for(int i=0;i<trips.size();i++){
            dis[trips[i][1]]+=trips[i][0];
            dis[trips[i][2]]-=trips[i][0];
        }
        int curr{0};
        for(auto it:dis){
            curr+=it.second;
            if(curr>capacity)
                return false;
        }
        return true;
    }
};

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<pair<int,int>> events;
        for(int i=0;i<logs.size();i++){
            events.push_back({logs[i][0],1});
            events.push_back({logs[i][1],-1});
        }
        sort(events.begin(),events.end());
        int cur_pop{0}, min_year{0}, max_pop{INT_MIN};
        for(int i=0;i<events.size();i++){
            cur_pop+=events[i].second;
            if(cur_pop>max_pop){
                max_pop = cur_pop;
                min_year = events[i].first;
            }
        }
        return min_year;
    }
};

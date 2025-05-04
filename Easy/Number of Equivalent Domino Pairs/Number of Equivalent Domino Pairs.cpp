class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count{0};
        map<pair<int,int>,int> umap;
        for(int i=0;i<dominoes.size();i++){
            int a = min(dominoes[i][0],dominoes[i][1]);
            int b = max(dominoes[i][0],dominoes[i][1]);
            pair<int,int> p{a,b};
            umap[p]++;
        }
        for(auto i:umap){
            if(i.second!=1)
                count+=((i.second* (i.second-1))/2);
        }
    return count;
    }
};

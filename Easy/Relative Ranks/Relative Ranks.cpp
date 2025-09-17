class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> umap;
        for(int i=0;i<score.size();i++){
            umap[score[i]]=i;
        }
        set<int,greater<int>> s;
        for(int i=0;i<score.size();i++){
            s.insert(score[i]);
        }
        vector<string> str(score.size());
        int count{0};
        for(auto i: s){
            if(count==0){
                str[umap[i]] = "Gold Medal";
            }
            else if(count==1){
                str[umap[i]] = "Silver Medal";
            }
            else if(count==2){
                str[umap[i]] = "Bronze Medal";
            }
            else{
                str[umap[i]] = to_string(count+1);
            }
            count++;
        }
    return str;
    }
};

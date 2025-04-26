class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        string str;
        vector<set<string>> strs;
        for(int i=0;i<responses.size();i++){
            set<string> set_strs;
            for(int j=0;j<responses[i].size();j++){
                set_strs.insert(responses[i][j]);
            }
            strs.push_back(set_strs);
        }
        unordered_map<string,int> umap;
        for(int i=0;i<strs.size();i++){
            for(auto j : strs[i]){
                umap[j]++;
            }
        }
        int maxi{-1};
        for(auto i:umap){
            if(i.second>maxi){
                maxi = i.second;
                str = i.first;
            }
            if(i.second == maxi){
                if(str>i.first)
                    str = i.first;
            }
        }
    return str;
    }
};

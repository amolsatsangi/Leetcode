class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap{};
        for(auto str : strs){
            string x = str;
            sort(x.begin(),x.end());
            umap[x].push_back(str);
        }
        vector<vector<string>> ans_str;
        for(auto c:umap){
            ans_str.push_back(c.second);
        }
        return ans_str;
    }
};

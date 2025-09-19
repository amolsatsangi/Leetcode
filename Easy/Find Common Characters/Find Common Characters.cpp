class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> umap;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(umap.count(words[i][j])){
                    umap[words[i][j]]++;
                }
                else{
                    umap[words[i][j]] = 1;
                }
            }
        }
        vector<string> vec;
        for(auto i : umap){
            if(i.second>1)
                vec.push_back(string(i.first));
        }
        return vec;
    }
};

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> umap;
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
        }
        int count{umap[s[0]]};
        for(auto i:umap){
            if(count!=i.second)
                return false;
        }
    return  true;
    }
};

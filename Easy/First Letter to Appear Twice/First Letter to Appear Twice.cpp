class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> umap;
        for(auto c: s){
            umap[c]++;
            if(umap[c]==2)
                return c;
        }
    return ' ';
    }
};

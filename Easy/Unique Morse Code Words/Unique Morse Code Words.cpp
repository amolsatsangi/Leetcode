class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> strs {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int> umap;
        for(int i=0;i<words.size();i++){
            string str{""};
            for(int j=0;j<words[i].size();j++){
                str += strs[words[i][j]-'a'];
            }
            umap[str]++;
        }
        return umap.size();
    }
};

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> umap{};
        for(int i=0;i<magazine.size();i++){
            umap[magazine[i]]++;
        }
        for(int j=0;j<ransomNote.size();j++){
            umap[ransomNote[j]]--;
            if(umap[ransomNote[j]]<0)
                return false;
        }
        return true;
    }
};

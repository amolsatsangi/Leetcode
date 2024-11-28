class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> umap{};
        char ans{};
        for(int i =0;i<s.size();i++){
            umap[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            umap[t[j]]--;
            if(umap[t[j]]<0){
                ans= t[j];
                break;
            }       
        }
        return ans;
    }
};

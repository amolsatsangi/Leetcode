class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap{};
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++)
            umap[s[i]]++;
        for(int j=0;j<t.size();j++){
            umap[t[j]]--;
            if(umap[t[j]]<0)
                return false;
        }
        for(int i=0;i<s.size();i++)
            if(umap[s[i]]>0)
                return false;
        return true;
    }
};

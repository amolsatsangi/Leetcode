class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,char> s_map;
        unordered_map<char, int> t_map;
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++){
            if(!s_map.count(s[i])){
                s_map[s[i]] = t[i];
                t_map[t[i]]++;
            }
            if(s_map[s[i]]!=t[i] || t_map[t[i]]>1)
                return false;
        }
        return true;
    }
};

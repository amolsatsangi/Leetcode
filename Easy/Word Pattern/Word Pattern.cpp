class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, int> s_map{};
        unordered_map<char, int> p_map{};
        istringstream in(s);
        string word{};
        int i{};
        for(i=0; in >> word;i++){
        if(!s_map.count(word)){
            s_map[word] = pattern[i];
            p_map[pattern[i]]++;
        }
        if(s_map[word] !=pattern[i] || p_map[pattern[i]]>1)
                return false;
        }
        return i==pattern.size();
    }
};

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="",str2="";
        for(auto c : word1)
            str1+=c;
        for(auto c : word2)
            str2+=c;
        return str1==str2;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans_str{};
        int i{0}, n = strs.size();
        sort(strs.begin(),strs.end());
        while(i<strs[0].size() && i<strs[n-1].size()){
            if(strs[0][i]!=strs[n-1][i])
                return ans_str;
            ans_str+=strs[0][i];
            i++;
        }
    return ans_str;
    }
};

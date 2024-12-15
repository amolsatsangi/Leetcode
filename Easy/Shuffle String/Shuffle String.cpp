class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string new_str(s.size(),' ');
        for(int i=0;i<s.size();i++){
            new_str[indices[i]]=s[i];
        }
        return new_str;
    }
};

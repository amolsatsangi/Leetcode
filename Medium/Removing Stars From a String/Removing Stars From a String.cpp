class Solution {
public:
    string removeStars(string s) {
        string str;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*')
                str.pop_back();
            else
                str.push_back(s[i]);
        }
    return str;
    }
};

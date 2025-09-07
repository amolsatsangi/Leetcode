class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> str;
        int mini = min(s[1],s[4])-'0';
        int maxi = max(s[1],s[4])-'0';
        for(char j = s[0];j<=s[3];j++){
            for(int k=mini;k<=maxi;k++){
                string s{j};
                char a = k+'0';
                s+=a;
                str.push_back(s);
            }   
        }
    return str;
    }
};

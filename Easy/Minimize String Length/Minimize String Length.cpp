class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int> vec(26,0);
        for(int i=0;i<s.size();i++){
            vec[s[i]-'a'] = 1; 
        }
        int count{0};
        for(int i=0;i<vec.size();i++){
            vec[i]==1?count++:count;
        }
        return count;
    }
};

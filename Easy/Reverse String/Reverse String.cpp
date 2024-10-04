class Solution {
public:
    void reverseString(vector<char>& s) {
        int i{0};
        for(i=0;i<s.size()/2;i++){
            swap(s[i], s[s.size()-1-i]);
        }
    }
};

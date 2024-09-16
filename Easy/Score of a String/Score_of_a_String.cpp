class Solution {
public:
    int scoreOfString(string s) {
        int res=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i] > s[i+1])
                res =  res + s[i] - s[i+1];
            else 
                res =  res + s[i+1] - s[i];
        }
        return res;
    }
};

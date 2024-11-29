class Solution {
public:
    int firstUniqChar(string s) {
    bool flag = false;
     for(int i=0;i<s.size();i++){
        flag = false;
        for(int j=0;j<s.size();j++){
            if(s[i]==s[j] && i!=j){
                flag = true;
                break;
            }
        }
        if(!flag)
            return i;
     }
     return -1;
    }
};

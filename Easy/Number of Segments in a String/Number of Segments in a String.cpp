class Solution {
public:
    int countSegments(string s) {
        int count{0};
        string temp{""};
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && temp!=""){
                count++;
                temp="";
            }
            else if(s[i]!=' ')
                temp+=s[i];
        }
        if(temp!=""){
                count++;
                temp="";
            }
    return count;
    }
};

class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()!=2){
            string str="";
            for(int i=0;i<s.size()-1;i++){
                int n = ((s[i]-'0')+(s[i+1]-'0'))%10;
                str += to_string(n);
            }
            s = str;
        }
    return s[0]==s[1]?true:false;
    }
};

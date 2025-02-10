class Solution {
public:
    string clearDigits(string s) {
            for(int i=0;i<s.size();i++){
                if(s[i]>='0' && s[i]<='9'){
                    if(i-1>=0 && (s[i-1]>='a' && s[i-1]<='z')){
                        s.erase(i,1);
                        s.erase(i-1,1);
                        i=-1;
                    }
                }   
            }
        return s;
    }
};

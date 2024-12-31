class Solution {
public:
    int secondHighest(string s) {
        char max{'/'}, s_max{'/'};
        for(auto c:s){
            if(c>='0' && c<='9'){
                if(max<c){
                    s_max=max;
                    max=c;
                }
                else{
                    if(c>s_max && max!=c) 
                        s_max=c;
                }
            }
        }
        if(s_max=='/' || max==s_max)
            return -1;
        return int(s_max-'0');
    }
};

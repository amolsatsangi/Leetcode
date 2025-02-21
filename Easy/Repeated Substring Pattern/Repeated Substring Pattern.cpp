class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
            string sub_str = s.substr(0,i);
            string new_str="";
            for(int j=0;j<n/i;j++){
                new_str+=sub_str;
            }
            if(new_str==s)
                return true;
        }
        }
    return false;
    }
};


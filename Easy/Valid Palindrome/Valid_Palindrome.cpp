class Solution {
public:
    bool isPalindrome(string s) {
        bool ans = true;
        string f_string="";
        int n =  s.size(), i{0};
        while(i<n){
            if(s[i]>='A' && s[i]<='Z')
                f_string+=s[i]+32;
            else if(s[i]>='a' && s[i]<='z')
                f_string+=s[i];
            else if(s[i]>='0' && s[i]<='9')
                f_string+=s[i];
            i++;
        }
        i=0;
        n = f_string.size();
        while(i<n/2){
            if(f_string[i]!=f_string[n-i-1]){
                ans = false;
                break;
            }
            i++;
        }
    return ans;
    }
};

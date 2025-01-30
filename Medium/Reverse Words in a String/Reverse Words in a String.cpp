class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans{""}, temp{""};
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && temp!=""){
                reverse(temp.begin(),temp.end());
                if(ans=="")
                    ans=ans+temp;
                else
                    ans=ans+' '+temp;
                temp="";
            }
            else if(s[i]!=' ')
                temp+=s[i];
        }
        if(temp!=""){
        reverse(temp.begin(),temp.end());
        if(ans=="")
            ans=ans+temp;
        else
            ans=ans+' '+temp;
        }
        return ans;
    }
};

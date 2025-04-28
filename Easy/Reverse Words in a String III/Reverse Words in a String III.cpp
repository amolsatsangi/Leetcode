class Solution {
public:
    string reverseWords(string s) {
        string temp{""};
        int i;
        for(i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(temp.begin(),temp.end());
                int k = i-temp.size(),j{0};
                while(j<temp.size()){
                    s[k]=temp[j];
                    k++;j++;
                }
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        reverse(temp.begin(),temp.end());
        int k = s.size()-temp.size(),j{0};
                while(j<temp.size()){
                    s[k]=temp[j];
                    k++;j++;
                }
    return s;
    }
};

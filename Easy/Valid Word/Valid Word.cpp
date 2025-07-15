class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3)
            return false;
        bool flag1{false},flag2{false},flag3{false};
        for(int i=0;i<word.size();i++){
            if(tolower(word[i])=='a' || tolower(word[i])=='e' || tolower(word[i])=='i' || tolower(word[i])=='o' || tolower(word[i])=='u')
                flag1 = true;
            else if(tolower(word[i])>='b' && tolower(word[i])<='z')
                flag2 = true;
            else if(word[i]<'0' || word[i]>'9')
                flag3 = true;
        }
        if(flag1 && flag2 && !flag3)
            return true;
    return false;
    }
};

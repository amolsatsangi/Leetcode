class Solution {
public:
    string reverseVowels(string s) {
        int i=0, j= s.size()-1;
        while(i<j){
            
            if((char(tolower(s[i]))=='a' || char(tolower(s[i]))=='e'|| char(tolower(s[i]))=='i' || char(tolower(s[i]))=='o' || char(tolower(s[i]))=='u' ) && (char(tolower(s[j]))=='a' || char(tolower(s[j]))=='e'|| char(tolower(s[j]))=='i' || char(tolower(s[j]))=='o' || char(tolower(s[j]))=='u' )){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            if(char(tolower(s[i]))!='a' && char(tolower(s[i]))!='e' && char(tolower(s[i]))!='i' && char(tolower(s[i]))!='o' && char(tolower(s[i]))!='u' )
                i++;
            if(char(tolower(s[j]))!='a' && char(tolower(s[j]))!='e' && char(tolower(s[j]))!='i' && char(tolower(s[j]))!='o' && char(tolower(s[j]))!='u' )
                j--;
        }
        return s;
    }
};

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n1{0},n2{0};
        for(int i=0;i<s.size()/2;i++){
            if(s[i]=='a'||s[i]== 'e'||s[i]== 'i' ||s[i]== 'o' ||s[i]== 'u' ||s[i]== 'A' ||s[i]== 'E' ||s[i]== 'I' ||s[i]== 'O'||s[i]==  'U')
                n1++;
        }
        for(int i=s.size()/2;i<s.size();i++){
            if(s[i]=='a'||s[i]== 'e'||s[i]== 'i' ||s[i]== 'o' ||s[i]== 'u' ||s[i]== 'A' ||s[i]== 'E' ||s[i]== 'I' ||s[i]== 'O'||s[i]==  'U')
                n2++;
        }
    return n1 == n2;
    }
};

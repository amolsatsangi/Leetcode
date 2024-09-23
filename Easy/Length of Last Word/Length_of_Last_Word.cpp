class Solution {
public:
    int lengthOfLastWord(string s) {
        int size{0};
        int i= s.size()-1;
        if(s.size() == 0)
        return 0;
            while(i>=0 && s[i]==' ')
            {
                i--;
            }
            while(i>=0 && s[i]!=' '){
                i--;
                size++;
            }
    return size;
    }
};

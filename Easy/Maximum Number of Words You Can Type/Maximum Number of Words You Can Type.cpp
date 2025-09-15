class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count{0};
        bool flag{false};
        for(int i=0;i<text.size();i++){
            if(text[i]!=' ' && !flag){
                for(int j=0;j<brokenLetters.size();j++){
                    if(brokenLetters[j]==text[i]){
                        flag = true;
                        break;
                    }
                }
            }
            else if(text[i]==' '){
                if(!flag){
                    count++;
                }
                flag = false;
            }
        }
        if(!flag){
            count++;
        }
    return count;
    }
};

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            bool flag{true};
            for(int j=0;j<words[i].size()/2;j++){
                if(words[i][j]!=words[i][words[i].size()-1-j]){
                    flag = false;
                    break;
                }
            }
            if(flag)
                return words[i];
        }
    return "";
    }
};

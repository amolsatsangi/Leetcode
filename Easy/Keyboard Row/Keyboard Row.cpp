class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string str0 = "qwertyuiop";
        string str1 = "asdfghjkl";
        string str2 = "zxcvbnm";
        vector<string> vec;
        for(int i=0;i<words.size();i++){
            int r{-1};
            if(str0.find(tolower(words[i][0]))!=string::npos){
                r = 0;
            }
            else if(str1.find(tolower(words[i][0]))!=string::npos){
                r = 1;
            }
            else{
                r = 2;
            } 
            bool flag {false};
            for(int j=0;j<words[i].size();j++){
                if(!r){
                    if(str0.find(tolower(words[i][j])) == string::npos){
                        flag = true;
                        break;
                    }
                }
                else if(r==1){
                    if(str1.find(tolower(words[i][j])) == string::npos){
                        flag = true;
                        break;
                    }
                }
                else{
                    if(str2.find(tolower(words[i][j])) == string::npos){
                        flag = true;
                        break;
                    }
                }
            }
            if(!flag)
                vec.push_back(words[i]);
        }
        return vec;
    }
};

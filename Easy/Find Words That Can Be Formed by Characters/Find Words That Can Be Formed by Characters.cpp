class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count{0};
        vector<int> base (26,0);
        for(int i=0;i<chars.size();i++)
            base[chars[i]-'a']++;
        for(int i=0;i<words.size();i++){
            auto vec = base;
            bool flag{true};
            for(int j=0;j<words[i].size();j++){
                if(vec[words[i][j]-'a']>0)
                    vec[words[i][j]-'a']--;
                else{
                    flag = false;
                    break;
                }
            }
            if(flag)
                count += words[i].size();
        }
    return count;
    }
};

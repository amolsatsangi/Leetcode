class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26)
            return false;
        vector<bool> flag_vec(26,false);
        for(int i=0;i<sentence.size();i++){
            int c = sentence[i]-'a';
            if(c<26 && c>=0)
                flag_vec[sentence[i]-'a']= true;
        }
        for(int i=0;i<flag_vec.size();i++){
            if(flag_vec[i]==false)
                return false;
        }
        return true;
    }
};

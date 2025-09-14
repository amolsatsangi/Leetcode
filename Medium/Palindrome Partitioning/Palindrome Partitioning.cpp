class Solution {
public:
    bool isPalindrom(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    void createPartition(vector<vector<string>> & collection,vector<string>& substrings,string & s,int index){
        if(index == s.size()){
            collection.push_back(substrings);
            return;
        }
        for(int j=index;j<s.size();j++){
            if(isPalindrom(index,j,s)){
                substrings.push_back(s.substr(index,j-index+1));
                createPartition(collection,substrings,s,j+1);
                substrings.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> collection;
        vector<string> substrings;
        createPartition(collection,substrings,s,0);
        return collection;
    }
};

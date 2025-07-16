class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> umap;
        string str{""};
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=' ')
                str+=s1[i];
            else{
                umap[str]++;
                str="";
            }
        }
        umap[str]++;
        str="";
        for(int i=0;i<s2.size();i++){
            if(s2[i]!=' ')
                str+=s2[i];
            else{
                umap[str]++;
                str="";
            }
        }
        umap[str]++;
        str="";
        vector<string> vec;
        for(auto c:umap){
            if(c.second==1)
                vec.push_back(c.first);
        }
    return vec;
    }
};

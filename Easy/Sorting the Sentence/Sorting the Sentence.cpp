class Solution {
public:
    string sortSentence(string s) {
        unordered_map<int,string> umap;
        int count{0};
        string str{""};
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                umap[int(str[str.size()-1]-'1')] = str.substr(0,str.size()-1);
                count++;
                str="";
            }
            else{
                str+=s[i];
            }
        }
        umap[int(str[str.size()-1]-'1')] = str.substr(0,str.size()-1);
        count++;
        str="";
        for(int i=0;i<=count;i++){
            str+=umap[i]+" ";
        }
    return str.substr(0,str.size()-2);
    }
};

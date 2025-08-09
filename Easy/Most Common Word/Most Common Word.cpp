class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> umap;
        string str{""};
        for(int i=0;i<paragraph.size();i++){
            if(paragraph[i]!=' ' && paragraph[i]!='!' && paragraph[i]!='?' && paragraph[i]!='\'' && paragraph[i]!=',' && paragraph[i]!=';' && paragraph[i]!='.')
                str+=tolower(char(paragraph[i]));
            else{
                if(str!="")
                    umap[str]++;
                str="";
            }
        }
        if(str!=""){
            umap[str]++;
            str="";
        }
        int maxi{INT_MIN};
        string ans{""};
        for(int i=0;i<banned.size();i++){
            umap[banned[i]]=-1;
        }
            for(auto e:umap){
                if(maxi < e.second){
                    maxi = e.second;
                    ans = e.first;
                }
            }
    return ans;
    }
};

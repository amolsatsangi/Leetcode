class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> umap{};
        char alphabet = 'a';
        for(char c:key){
            if(c!= ' ' && umap.count(c)==0)
                umap[c]=alphabet++;
        }
        umap[' ']=' ';
        string ans_str{""};
        for(char c:message){
            ans_str+=umap[c];
        }
    return ans_str;
    }
};

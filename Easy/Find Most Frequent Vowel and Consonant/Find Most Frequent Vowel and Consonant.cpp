class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> umap;
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
        }
        int count1{0}, count2{0};
        for(auto i: umap){
            if(i.first== 'a' || i.first== 'e' || i.first== 'i' || i.first== 'o' || i.first== 'u'){
                count1=max(count1,i.second);
            }
            else
                count2 = max(count2, i.second);
        }
    return count1+count2;
    }
};

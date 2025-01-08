class Solution {
public:
    int is_prefix_suffix(string a, string b){
        if(a.size()>b.size())
            return 0;
        int i{0};
        while(i<a.size()){
            if(a[i]!=b[i])
                return 0;
            i++;
        }
        i=a.size()-1;
        int j=b.size()-1;
        while(i>=0){
            if(a[i]!=b[j])
                return 0;
            i--;
            j--;
        }
    return 1;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count{0};
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                count+=is_prefix_suffix(words[i],words[j]);
            }
        }
    return count;
    }
};

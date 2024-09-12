class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int i{0}, j{0}, rcount{0};
        for(i=0;i<words.size();i++){
            int count{0};
            for(j=0;j<words[i].size();j++){
                int k{0};
                while(k<allowed.size()){
                    if(words[i][j] == allowed[k]){
                        cout<<words[i][j]<<endl;
                        count++;
                        break;
                    }
                    k++;
                }
            }
            if(count == words[i].size())
                rcount++;
        }
        return rcount;
    }
};

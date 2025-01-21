class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi{INT_MIN};
        for(int i=0;i<sentences.size();i++){
            int local{0};
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' ') 
                local++;
            }
            maxi=max(maxi,++local);
        }
    return maxi;
    }
};

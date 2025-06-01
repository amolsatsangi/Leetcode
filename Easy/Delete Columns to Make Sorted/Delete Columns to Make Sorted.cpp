class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count{0};
        for(int j=0;j<strs[0].size();j++){
            char maxi{'a'};
            for(int i=0;i<strs.size();i++){
                maxi = max(maxi,strs[i][j]);
                if(maxi!=strs[i][j]){
                    count++;
                    break;
                }
            }
        }
    return count;
    }
};

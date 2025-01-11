class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            int mini{INT_MAX},maxi{INT_MIN},k{-1};
            for(int j=0;j<matrix[i].size();j++){
                if(mini>matrix[i][j]){
                    mini=matrix[i][j];
                    k=j;
                }
            }
            for(int z=0;z<matrix.size();z++){
                maxi=max(maxi,matrix[z][k]);
            }
            if(maxi==mini)
                ans.push_back(maxi);
        }
    return ans;
    }
};

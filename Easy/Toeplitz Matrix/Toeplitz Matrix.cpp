class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        bool flag;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                int a = i+1, b= j+1;
                if(a<matrix.size() && b<matrix[i].size()){
                    if(matrix[i][j]!=matrix[a][b])
                        return false;
                }
            }
        }
    return true;
    }
};

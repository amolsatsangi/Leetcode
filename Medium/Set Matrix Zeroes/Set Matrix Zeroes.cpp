class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rset, cset;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    rset.insert(i);
                    cset.insert(j);
                }
            }
        }
            for(auto i:rset){
                for(int j=0;j<matrix[0].size();j++)
                    matrix[i][j]=0;
            }
            for(int i=0;i<matrix.size();i++){
                for(auto j:cset)
                    matrix[i][j]=0;  
            }
    }
};

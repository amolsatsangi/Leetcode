class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int left_most{INT_MAX},top_most{INT_MAX},right_most{INT_MIN},bottom_most{INT_MIN};
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]){
                    left_most = min(left_most,i);
                    right_most = max(right_most,i);
                    top_most = min(top_most,j);
                    bottom_most = max(bottom_most,j);
                }
            }
        }
    return (right_most-left_most+1)*(bottom_most-top_most+1);
    }
};

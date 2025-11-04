class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        for(int z =0;z<k;z++){
            int last = grid[m-1][n-1];
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    int temp = grid[i][j];
                    grid[i][j]= last;
                    last = temp;
                }
            }
        }
        return grid;
    }
};

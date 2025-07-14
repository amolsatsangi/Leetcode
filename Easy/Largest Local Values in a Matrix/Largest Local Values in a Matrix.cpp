class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> vec(grid.size()-2,vector<int>(grid.size()-2,0));
        for(int i=0;i<grid.size()-2;i++){
            for(int j=0;j<grid.size()-2;j++){
                int maxi{0};
                for(int y=i;y<i+3;y++){
                    for(int z=j;z<j+3;z++){
                        maxi = max(maxi,grid[y][z]);
                    }
                }
                vec[i][j]=maxi;
            }
        }
    return vec;
    }
};

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter{0};
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]){
                    perimeter+=4;
                    if(i-1>=0 && grid[i-1][j])
                        perimeter+=-1;
                    if(j-1>=0 && grid[i][j-1])
                        perimeter+=-1;
                    if(j+1<grid[i].size() && grid[i][j+1])
                        perimeter+=-1;
                    if(i+1<grid.size() && grid[i+1][j])
                        perimeter+=-1;
                }
            }
        }
    return perimeter;
    }
};

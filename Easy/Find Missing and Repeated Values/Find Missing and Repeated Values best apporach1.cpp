class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        long int Sg{0}, Sn{0}, S2g{0},S2n{0};
        long int n = grid.size()*grid.size();
        Sn = (n*(n+1))/2;
        S2n = (n*(n+1)*(2*n+1))/6;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                Sg+=grid[i][j];
                S2g+=(grid[i][j]*grid[i][j]);
            }
        }
        int g = Sg-Sn;
        int h = (S2g-S2n)/g;
        ans.push_back((g+h)/2);
        ans.push_back((h-g)/2);
    return ans;
    }
};

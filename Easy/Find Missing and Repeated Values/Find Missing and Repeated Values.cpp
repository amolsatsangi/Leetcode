class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> hash(grid.size()*grid.size()+1,0);
        vector<int> ans(2,0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++)
                hash[grid[i][j]]++;
        }
        for(int i=1;i<hash.size();i++){
            if(hash[i]==2)
                ans[0]=i;
            else if(hash[i]==0)
                ans[1]=i;
        }
    return ans;
    }
};

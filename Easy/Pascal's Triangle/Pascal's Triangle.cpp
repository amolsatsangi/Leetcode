class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        pascal.push_back({1});
        if(numRows==1)
            return pascal;
        pascal.push_back({1,1});
        for(int i=1;i<numRows-1;i++){
            vector<int> temp;
            for(int j=0;j<pascal[i].size();j++){
                if(j==0)
                    temp.push_back(pascal[i][j]);
                if(j+1<pascal[i].size()){
                    int sum = pascal[i][j]+pascal[i][j+1];
                    temp.push_back(sum);
                }
                if(j==pascal[i].size()-1)
                    temp.push_back(pascal[i][j]);
            }
            pascal.push_back(temp);
        }
        return pascal;
    }
};

class Solution {
public:
    bool QueenSafe(vector<string> & vec,int row,int column){
        int r{row},c{column};
        while(r>=0){
            if(vec[r][c]=='Q')
                return false;
            r--;
        }
        r = row; c = column;
        while(r>=0 && c>=0){
            if(vec[r][c]=='Q')
                return false;
            r--; c--;
        }
        r = row; c = column;
        while(r>=0 && c<vec.size()){
            if(vec[r][c]=='Q')
                return false;
            r--; c++;
        }
        return true;
    }
    void PlaceQueens(vector<vector<string>> & ans,vector<string>& vec,int i){
        if(i==vec.size()){
            ans.push_back(vec);
            return;
        }
        for(int j=0;j<vec.size();j++){
            if(QueenSafe(vec,i,j)){
                vec[i][j]='Q';
                PlaceQueens(ans,vec,i+1);
                vec[i][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string str(n,'.');
        vector<string> vec(n,str);
        vector<vector<string>> ans;
        PlaceQueens(ans,vec,0);
        return ans;
    }
};

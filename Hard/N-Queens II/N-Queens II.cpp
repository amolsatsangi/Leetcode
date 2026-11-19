class Solution {
public:
    bool check(vector<vector<int>> & m,int row,int col){
        int i = row-1;
        while(i>=0){
            if(m[i][col]==1)
                return false;
            i--;
        }
        i = row-1;
        int j = col -1;
        while(i>=0 && j>=0){
            if(m[i][j]==1)
                return false;
            i--;j--;
        }
        i = row-1, j = col+1;
        int n = m.size();
        while(i>=0 && j<n){
            if(m[i][j]==1)  
                return false;
            i--;j++;
        }
        return true;
    }
    void queen_calculation(vector<vector<int>> & m,int i,int & count){
        int n = m.size();
        if(i==n){
            count++;
            return;
        }
        
       for(int j=0;j<n;j++){
            if(check(m,i,j)){
                m[i][j]=1;
                queen_calculation(m,i+1,count);
                m[i][j]=0;
            }
       }
        
    }
    int totalNQueens(int n) {
        int count{0};
        vector<vector<int>> m(n,vector<int>(n,0));
        queen_calculation(m,0,count);
        return count;
    }
};

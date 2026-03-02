class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> vec(n, 0);
        for(int i = 0; i < n; i++){
            for(int j = n - 1; j >= 0; j--){
                if(grid[i][j] == 0)
                    vec[i]++;
                else
                    break;
            }
        }

        int count{0};
        for(int i=0;i<vec.size();i++){
            int need_zero = n-i-1;
            int j = i;
            while(j<n && vec[j]<need_zero){
                j++;
            }
            if(j==n)
                return -1;
            while(i<j){
                swap(vec[j],vec[j-1]);
                j--;
                count++;
            }
        }

        return count;
    }
};

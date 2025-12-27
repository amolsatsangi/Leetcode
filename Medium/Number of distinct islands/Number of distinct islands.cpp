class Solution {
   public:
    bool check(int &nrow, int &ncol, int &n, int &m) {
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) return true;
        return false;
    }
    vector<int> check_row{-1, 0, 0, 1};
    vector<int> check_col{0, -1, 1, 0};
    void DFS(int &row, int &col, vector<vector<int>> &grid,
             vector<vector<bool>> &vis, vector<pair<int, int>> &path,
             int &base_row, int &base_col) {
        int n = grid.size();
        int m = grid[0].size();
        path.push_back({row - base_row, col - base_col});
        for (int i = 0; i < 4; i++) {
            int nrow = row + check_row[i];
            int ncol = col + check_col[i];
            if (check(nrow, ncol, n, m) && grid[nrow][ncol] &&
                vis[nrow][ncol] == false) {
                vis[nrow][ncol] = true;
                DFS(nrow, ncol, grid, vis, path, base_row, base_col);
            }
        }
    }
    int countDistinctIslands(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        set<vector<pair<int, int>>> st;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && vis[i][j] == false) {
                    vis[i][j] = true;
                    vector<pair<int, int>> path;
                    DFS(i, j, grid, vis, path, i, j);
                    st.insert(path);
                }
            }
        }
        return st.size();
    }
};

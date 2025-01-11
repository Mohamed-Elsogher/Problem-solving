class Solution {
private:
    vector<vector<int>> grid; 
    vector<vector<int>> memo; 
    int n; 
    int m; 

    bool isvalid(int r, int c) {
        return r >= 0 && r < n && c >= 0 && c < m;
    }

    int minPath(int r, int c) {
        if (!isvalid(r, c)) {
            return INT_MAX;
        }

        if (r == n - 1 && c == m - 1) {
            return grid[r][c];
        }

        if (memo[r][c] != -1) {
            return memo[r][c];
        }

        int path1 = minPath(r, c + 1); 
        int path2 = minPath(r + 1, c); 

        return memo[r][c] = grid[r][c] + min(path1, path2);
    }

public:
    int minPathSum(vector<vector<int>>& gridinput) {
        grid = gridinput; 
        n = grid.size(); 
        if (n == 0) return 0; 
        m = grid[0].size(); 
        memo.assign(n, vector<int>(m, -1)); 

        
        return minPath(0, 0);
    }
};

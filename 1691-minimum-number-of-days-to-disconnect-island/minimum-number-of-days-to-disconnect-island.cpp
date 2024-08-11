class Solution {
public:
    int m, n;

    void DFS(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& vis) {
        if (i < 0 || i >= m || j < 0 || j >= n || vis[i][j] || grid[i][j] == 0) {
            return;
        }

        vis[i][j] = true;

        DFS(grid, i + 1, j, vis);
        DFS(grid, i - 1, j, vis);
        DFS(grid, i, j + 1, vis);
        DFS(grid, i, j - 1, vis);
    }

    int numOfIslands(vector<vector<int>>& grid) {
        m = grid.size();  // Always update m and n to match the current grid size
        n = grid[0].size();

        int islands = 0;
        vector<vector<bool>> vis(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1 && !vis[i][j]) { // Land
                    DFS(grid, i, j, vis);
                    islands++;
                }
            }
        }
        return islands;
    }

    int minDays(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        int islands = numOfIslands(grid);

        if (islands > 1 || islands == 0) {
            return 0;
        } else {
            // Check if we can disconnect the graph in 1 day
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 1) {
                        grid[i][j] = 0;

                        islands = numOfIslands(grid);

                        if (islands > 1 || islands == 0) return 1;

                        grid[i][j] = 1;  // Restore the grid
                    }
                }
            }
        }
        return 2;
    }
};
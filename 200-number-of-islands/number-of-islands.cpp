class Solution {
public:
int n, m;
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid) {
        vis[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});

        // Directions for moving up, down, left, and right
        vector<int> drow = {-1, 1, 0, 0};
        vector<int> dcol = {0, 0, -1, 1};

        while (!q.empty()) {
            row = q.front().first;
            col = q.front().second;
            q.pop();

            // Traverse through the neighbors and mark them visited if they are land
            for (int i = 0; i < 4; ++i) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && //check for validity
                    grid[nrow][ncol] == '1' && !vis[nrow][ncol]) { // Check for land and visited
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;

        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < m; ++col) {
                if (!vis[row][col] && grid[row][col] == '1') {
                    cnt++;
                    bfs(row, col, vis, grid);
                }
            }
        }
        return cnt;
    }
};
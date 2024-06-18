class Solution {
public:
    int n, m;
    //dfs
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>>& grid){
        if(row<0 || col<0 || row>=n || col>=m || grid[row][col]==0 || vis[row][col]==1){
            return;
        }
        vis[row][col]= 1;

        dfs(row+1, col, vis, grid);
        dfs(row-1, col, vis, grid);
        dfs(row, col-1, vis, grid);
        dfs(row, col+1, vis, grid);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        n= grid.size();
        m= grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int col=0; col<m; col++){
            if(grid[0][col]==1 && !vis[0][col]){
                dfs(0, col, vis, grid);
            }
            if(grid[n-1][col]==1 && !vis[n-1][col]){
                dfs(n-1, col, vis, grid);
            }
        }
        for(int row=0; row<n; row++){
            if(grid[row][0]==1 && !vis[row][0]){
                dfs(row, 0, vis, grid);
            }
            if(grid[row][m-1]==1 && !vis[row][m-1]){
                dfs(row, m-1, vis, grid);
            }
        }
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
class Solution {
public:
    int n, m;
    void dfs(int row, int col, vector<vector<int>>& visited, vector<vector<char>>& grid){
        if(row<0 || col<0 || row>=n || col>=m) return;
    
        if(grid[row][col]=='0' || visited[row][col]==1) return;  
        visited[row][col]= 1;

        dfs(row-1, col, visited, grid);
        dfs(row+1, col, visited, grid);
        dfs(row, col-1, visited, grid);
        dfs(row, col+1, visited, grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        n= grid.size();
        m= grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));

        int cnt= 0;

        for(int i= 0; i<n; i++){
            for(int j=0; j<m; j++){
                if(visited[i][j]==0 && grid[i][j]=='1'){
                    cnt++;
                    dfs(i, j, visited, grid);
                }
            }
        }
        return cnt;
    }
};
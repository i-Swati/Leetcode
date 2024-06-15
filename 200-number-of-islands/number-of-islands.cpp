class Solution {
public:
    int n,m;
    void dfs(int i, int j, vector<vector<int>> &visited, vector<vector<char>>& grid){
        if(i<0 || j<0 || i>=n || j>=m){
            return;
        }
        if(grid[i][j]=='0' || visited[i][j]==1){
            return;
        }
        visited[i][j]= 1;
        
        dfs(i+1, j, visited, grid);
        dfs(i-1, j, visited, grid);
        dfs(i, j+1, visited, grid);
        dfs(i, j-1, visited, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        n= grid.size();
        m= grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));

        int cnt= 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && visited[i][j]==0){
                    cnt++;
                    dfs(i, j, visited, grid);
                }
            }
        }
        return cnt;
    }
};
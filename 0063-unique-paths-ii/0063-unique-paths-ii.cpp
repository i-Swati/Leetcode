class Solution {
public:
    int dp[101][101];
    int solve(int i, int j, vector<vector<int>>& grid){
        if(i==0 && j==0)    return 1;
        if(i<0 || j<0)  return 0;

        if(grid[i][j]==1)   return 0;

        if(dp[i][j] != -1)  return dp[i][j];
        
        int up= solve(i-1, j, grid);
        int left= solve(i, j-1, grid);

        return dp[i][j]= up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        memset(dp, -1, sizeof(dp));
        // If the starting cell has an obstacle, return 0 immediately.
        if (grid[0][0] == 1) return 0;

        int i= grid.size();
        int j= grid[0].size();

        // Start the recursive function from the bottom-right corner.
        return solve(i-1, j-1, grid);
    }
};
class Solution {
public:
//DP
    int solve(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(i==0 && j==0)    return 1;
        if(i<0 || j<0)  return 0;

        if(grid[i][j]==1)   return 0;

        if(dp[i][j] != -1)  return dp[i][j];
        
        int up= solve(i-1, j, grid, dp);
        int left= solve(i, j-1, grid, dp);

        return dp[i][j]= up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
         int n= grid.size(); //row size
        int m= grid[0].size(); //column size


        vector<vector<int>> dp(n, vector<int>(m, -1));

        // If the starting cell has an obstacle, return 0 immediately.
        if (grid[0][0] == 1) return 0;

        // Start the recursive function from the bottom-right corner.
        return solve(n-1, m-1, grid, dp);
    }
};
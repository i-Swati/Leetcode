class Solution {
public:
    //DP
    int dp[200][200];
    int solve(int i, int j, vector<vector<int>>& grid){
        if(i==0 && j==0)    return grid[i][j];
        if(i<0 || j<0)  return INT_MAX;

        if(dp[i][j] != -1)    return dp[i][j];

        int up= solve(i-1, j, grid);
        int left= solve(i, j-1, grid);

        return dp[i][j]= grid[i][j] + min(up, left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n= grid.size(); //row
        int m= grid[0].size(); //column

        memset(dp, -1, sizeof(dp));

        return solve(n-1, m-1, grid);
    }
};
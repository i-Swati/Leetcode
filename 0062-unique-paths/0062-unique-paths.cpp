class Solution {
public:
    int solve(int i, int j, vector<vector<int>> &dp){
        //base case
        if(i==0 && j==0)    return 1;
        if(i<0 || j<0)  return 0;

        if(dp[i][j] != -1)   return dp[i][j];

        int up= solve(i-1, j, dp);
        int left= solve(i, j-1, dp);

        return dp[i][j]= up + left;
    }
    int uniquePaths(int n, int m) {
        vector<vector<int>> dp(n, vector<int>(m, -1));

        return solve(n-1, m-1, dp);
    }
};
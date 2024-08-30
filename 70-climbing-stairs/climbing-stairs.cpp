class Solution {
public:
    int solve(int ind, vector<int> &dp){
        if(ind==0)  return 1;
        if(ind<0)   return 0;

        if(dp[ind]!=-1) return dp[ind];

        int step_1= solve(ind-1, dp);
        int step_2= solve(ind-2, dp);

        return dp[ind]=step_1 + step_2;

    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solve(n, dp);
    }
};
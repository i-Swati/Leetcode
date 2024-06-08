class Solution {
public:

    int solve(int ind, vector<int> &dp){
        //base case
        if(ind==0){
            return 1;
        }
        if(ind<0){
            return 0;
        }
        if(dp[ind] != -1){
            return dp[ind];
        }
        int step1= solve(ind-1, dp);
        int step2= solve(ind-2, dp);

        return dp[ind]=step1 + step2;
    }

    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        
        return solve(n, dp);
    }
};
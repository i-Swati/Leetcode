class Solution {
public:
    int recursive(int ind, int target, vector<int>& coins, vector<vector<int>>& dp){
        //base cases
        if(target==0)   return 1;
        if(ind==0){
            if(target%coins[ind] == 0)  return 1;
            else return 0;
        }

        if(dp[ind][target] != -1)   return dp[ind][target];

        int not_take= recursive(ind-1, target, coins, dp);
        int take= 0;
        if(target>=coins[ind]){
            take= recursive(ind, target-coins[ind], coins, dp);
        }

        return dp[ind][target] = take + not_take;
    }
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
        return recursive(n-1, amount, coins, dp);
    }
};
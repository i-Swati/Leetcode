class Solution {
public:
    int recursive(int ind, int target, vector<int>& coins, vector<vector<int>>& dp){
        //base cases
        if(target==0)   return 0;
        if(ind==0) {
            if(target%coins[ind]==0)  return (target/coins[ind]);
            else return 1e7;  
        }
        if(dp[ind][target] != -1)  return dp[ind][target];
        int not_take= 0 + recursive(ind-1, target, coins, dp);
        int take= 1e7;
        if(target>=coins[ind]){
            take= 1 + recursive(ind, target-coins[ind], coins, dp);
        }
        return dp[ind][target]= min(take, not_take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
        int ans= recursive(n-1, amount, coins, dp);
        if(ans>=1e7){
            return -1;
        }
        else    return ans;
    }
};
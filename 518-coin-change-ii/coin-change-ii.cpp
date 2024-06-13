class Solution {
public:
    int dp[301][5001];
    int recursive(int ind, int target, vector<int>& coins){
        //base cases
        if(ind==0){
            if(target%coins[ind] == 0)  return 1;
            else return 0;
        }

        if(dp[ind][target] != -1)   return dp[ind][target];

        int not_take= recursive(ind-1, target, coins);
        int take= 0;
        if(target>=coins[ind]){
            take= recursive(ind, target-coins[ind], coins);
        }

        return dp[ind][target] = take + not_take;
    }
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        memset(dp, -1, sizeof(dp));
        return recursive(n-1, amount, coins);
    }
};
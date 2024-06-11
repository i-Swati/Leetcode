class Solution {
public:
    bool recursive(int ind, int target, vector<int> &nums, vector<vector<int>> &dp){
        //base cases
        if(target==0)   return 1;
        if(ind==0){
            if(target==nums[0]) return 1;
            else return 0;
        }

        if(dp[ind][target]!= -1)    return dp[ind][target];

        int take= false;
        int not_take= recursive(ind-1, target, nums, dp);

        if(target>=nums[ind]){
            take= recursive(ind-1, target-nums[ind], nums, dp);
        }

        return dp[ind][target]= take||not_take;

    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n= nums.size();
        
        for(int i=0; i<n; i++)  sum= sum+nums[i];

        if(sum%2!=0)    return false;

        int target= sum/2;
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));

        return recursive(n-1, target, nums, dp);
    }
};
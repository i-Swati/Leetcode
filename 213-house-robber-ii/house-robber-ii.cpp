class Solution {
public:

    int solve(int ind, int n, vector<int>& nums, vector<int> &dp){
        if(ind==n)  return nums[n];
        if(ind>n)   return 0;

        if(dp[ind] != -1)   return dp[ind];
        
        int take= nums[ind] + solve(ind+2, n, nums, dp);
        int not_take= 0 + solve(ind+1, n, nums, dp);

        return dp[ind] = max(take, not_take);
    }
    int rob(vector<int>& nums) {
        int n= nums.size();

        if(n==1)    return nums[0];    
        
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);


        int ans1= solve(0, n-2, nums, dp1);
        int ans2= solve(1, n-1, nums, dp2);

        return max(ans1, ans2);
    }
};
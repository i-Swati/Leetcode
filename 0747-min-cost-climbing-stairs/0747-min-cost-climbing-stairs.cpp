class Solution {
public:
    int minCostClimbingStairs(vector<int>& arr) {
    int n = arr.size();
        
        // Create a vector to store the minimum cost to reach each step.
        vector<int> dp(n + 1);
        
        // Initialize the cost of reaching the first two steps.
        dp[0] = arr[0];
        dp[1] = arr[1];
        
        // Start from the 2nd step and calculate the minimum cost for each step.
        for (int i = 2; i < n; i++) {
            dp[i] = arr[i] + min(dp[i - 1], dp[i - 2]);
        }
        
        // Return the minimum cost to reach the top of the floor, which is either the cost of the last step or the step before the last.
        return min(dp[n - 1], dp[n - 2]);
    }
};
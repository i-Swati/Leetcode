class Solution {
public:
//TC= O(nlogn) for sorting + O(n) for counting consecutives= O(n log n)
//SC= O(n)
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        // Sort the array
        sort(nums.begin(), nums.end());

        int cnt = 1; // Current streak count// we initialize to 1, because if the array has atleast one element it counts 1
        int maxCnt = 1; // Longest streak count

        for (int i = 1; i < nums.size(); i++) {
            // If the current number is consecutive to the previous one
            if (nums[i] == nums[i - 1] + 1) {
                cnt++;
            } else if (nums[i] != nums[i - 1]) { 
                // If the current number is not consecutive and not duplicate
                maxCnt = max(maxCnt, cnt); // Update the max count
                cnt = 1; // Reset count
            }
        }

        // Return the maximum streak length
        return max(maxCnt, cnt); // Final check for the longest streak
    }
};
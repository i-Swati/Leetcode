class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();

        // Loop through the array
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {  // Detect a break in order
                cnt++;
            }
        }

        // Check if the last element is greater than the first element (circular check)
        if (nums[n - 1] > nums[0]) {
            cnt++;
        }

        // If there is more than one break, return false
        if (cnt > 1) {
            return false;
        }

        // Otherwise, the array is either already sorted or can be rotated to be sorted
        return true;
    }
};
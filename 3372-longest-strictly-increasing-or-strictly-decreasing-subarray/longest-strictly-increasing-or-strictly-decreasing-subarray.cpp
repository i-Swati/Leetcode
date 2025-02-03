class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
    if (n == 1) return 1;

    int maxLength = 1, incLen = 1, decLen = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i - 1]) {
            incLen++;
            decLen = 1;
        } else if (nums[i] < nums[i - 1]) {
            decLen++;
            incLen = 1;
        } else {
            incLen = 1;
            decLen = 1;
        }
        maxLength = max(maxLength, max(incLen, decLen));
    }

    return maxLength;
    }
};
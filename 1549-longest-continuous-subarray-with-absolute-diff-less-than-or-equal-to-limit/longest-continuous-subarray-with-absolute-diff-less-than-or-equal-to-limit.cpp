class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> maxDeque, minDeque;
        int left = 0, right;
        int maxLength = 0;

        for (right = 0; right < nums.size(); ++right) {
            // Maintain the decreasing deque for max
            while (!maxDeque.empty() && nums[right] > maxDeque.back()) {
                maxDeque.pop_back();
            }
            maxDeque.push_back(nums[right]);

            // Maintain the increasing deque for min
            while (!minDeque.empty() && nums[right] < minDeque.back()) {
                minDeque.pop_back();
            }
            minDeque.push_back(nums[right]);

            // If the current window is invalid, shrink it from the left
            while (maxDeque.front() - minDeque.front() > limit) {
                if (nums[left] == maxDeque.front()) maxDeque.pop_front();
                if (nums[left] == minDeque.front()) minDeque.pop_front();
                ++left;
            }

            // Update the maxLength
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
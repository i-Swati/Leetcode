#include <vector>
#include <stack>

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        stack<int> s;
        int third = INT_MIN; // Potential '3' element

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < third) {
                return true; // Found a '1-3-2' pattern
            }

            while (!s.empty() && nums[i] > s.top()) {
                third = s.top(); // Update potential '3' element
                s.pop();
            }

            s.push(nums[i]); // Push potential '2' element onto the stack
        }

        return false; // No '1-3-2' pattern found
    }
};

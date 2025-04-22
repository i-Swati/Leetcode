class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        int subsets = 1 << n; // 2^n subsets

        for (int mask = 0; mask < subsets; ++mask) {
            int currentXOR = 0;
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    currentXOR ^= nums[i];
                }
            }
            total += currentXOR;
        }

        return total;
    }
};
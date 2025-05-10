class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        int zero1 = 0, zero2 = 0;

        for (int num : nums1) {
            if (num == 0) zero1++;
            else sum1 += num;
        }

        for (int num : nums2) {
            if (num == 0) zero2++;
            else sum2 += num;
        }

        // Try to equalize both arrays to sum1 + zero1
        long long target1 = sum1 + zero1;
        long long fill2 = target1 - sum2;
        if ((fill2 >= zero2 && zero2 > 0) || (fill2 == 0 && zero2 == 0)) {
            return target1;
        }

        // Try to equalize both arrays to sum2 + zero2
        long long target2 = sum2 + zero2;
        long long fill1 = target2 - sum1;
        if ((fill1 >= zero1 && zero1 > 0) || (fill1 == 0 && zero1 == 0)) {
            return target2;
        }

        return -1;
    }
};
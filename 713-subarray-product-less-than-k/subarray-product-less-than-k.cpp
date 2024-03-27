class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        int n = arr.size();
        if (k <= 1) return 0;  // Since all elements are positive, product < 1 is not possible

        int prod = 1;
        int count = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            prod *= arr[right];
            while (prod >= k) {
                prod /= arr[left];
                left++;
            }
            count += (right - left + 1);
        }

        return count;
    }
};

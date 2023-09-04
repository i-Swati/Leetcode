class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int j = 0; // Initialize j to 0

        // Iterate through the array
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                // Swap non-zero element with the element at j
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};

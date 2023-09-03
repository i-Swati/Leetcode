class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        int n = arr.size();

        d = d % n;

        vector<int> temp(d); // Initialize temp with the same size as d

        // Copy the last 'd' elements to temp
        for (int i = 0; i < d; i++) {
            temp[i] = arr[n - d + i];
        }

        // Shifting
        for (int i = n - 1; i >= d; i--) {
            arr[i] = arr[i - d];
        }

        // Copy the elements from temp to the beginning of arr
        for (int i = 0; i < d; i++) {
            arr[i] = temp[i];
        }
    }
};

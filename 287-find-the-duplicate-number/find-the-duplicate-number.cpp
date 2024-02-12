class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // Sort the array
        
        int n = arr.size();
        
        for (int i = 1; i < n; ++i) {
            if (arr[i] == arr[i - 1]) { // Compare adjacent elements
                return arr[i]; // Found duplicate
            }
        }
        
        return -1; // No duplicate found
    }
};

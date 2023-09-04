class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n; // Calculate the effective rotation value
        
        // Reverse the entire array
        reverse(arr.begin(), arr.end());
        
        // Reverse the first part
        reverse(arr.begin(), arr.begin() + d);
        
        // Reverse the second part
        reverse(arr.begin() + d, arr.end());
    }
};

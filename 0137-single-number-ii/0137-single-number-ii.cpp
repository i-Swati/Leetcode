class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int ones = 0; // Stores bits that appear once
        int twos = 0; // Stores bits that appear twice

        for (int i=0; i<arr.size(); i++) {
            ones = (ones ^ arr[i]) & ~twos; // Update the bits that appear once
            twos = (twos ^ arr[i]) & ~ones; // Update the bits that appear twice
        }

        return ones;
    }
};
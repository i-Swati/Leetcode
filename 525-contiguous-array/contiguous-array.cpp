class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        unordered_map<int, int> countMap;
        int count = 0;
        int maxLength = 0;

        countMap[0] = -1; // Initialize with sum 0 at index -1

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] == 0) {
                count--;
            } else {
                count++;
            }

            // If the current count already exists in the map,
            // calculate the length of the subarray and update maxLength
            if (countMap.find(count) != countMap.end()) {
                maxLength = max(maxLength, i - countMap[count]);
            } else {
                countMap[count] = i;
            }
        }

        return maxLength;
    }
};
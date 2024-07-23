class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // Step 1: Count the frequencies
        unordered_map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }

        // Step 2: Sort based on frequency and value
        sort(nums.begin(), nums.end(), [&frequencyMap](int a, int b) {
            if (frequencyMap[a] != frequencyMap[b]) {
                return frequencyMap[a] < frequencyMap[b]; // Increasing frequency
            } else {
                return a > b; // Decreasing value if frequencies are the same
            }
        });

        // Step 3: Return the sorted array
        return nums;
    }
};
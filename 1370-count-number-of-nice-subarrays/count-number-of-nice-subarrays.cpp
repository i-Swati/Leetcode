class Solution {
public:
    int numberOfSubarrays(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> prefixCount;
        int currentPrefixSum = 0;
        int niceSubarrays = 0;

        // Initialize the map with 0 prefix sum
        prefixCount[0] = 1;

        for (int num : nums) {
            // Increase the prefix sum by 1 if the number is odd
            currentPrefixSum += (num % 2);

            // If there exists a prefix sum which is (currentPrefixSum - k),
            // it means there are `k` odd numbers between that prefix and the current prefix
            if (prefixCount.find(currentPrefixSum - k) != prefixCount.end()) {
                niceSubarrays += prefixCount[currentPrefixSum - k];
            }

            // Update the map with the current prefix sum
            prefixCount[currentPrefixSum]++;
        }

        return niceSubarrays;
    }
};

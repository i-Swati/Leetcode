class Solution {
public:
    // Helper function to get the mapped value of a number
    int getMappedValue(int num, const vector<int>& mapping) {
        string numStr = to_string(num);
        string mappedStr = "";
        
        for (char c : numStr) {
            mappedStr += to_string(mapping[c - '0']);
        }
        
        return stoi(mappedStr);
    }
    
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        // Create a vector of pairs (mapped value, original number)
        vector<pair<int, int>> mappedNums;
        
        for (int num : nums) {
            int mappedValue = getMappedValue(num, mapping);
            mappedNums.emplace_back(mappedValue, num);
        }
        
        // Sort the pairs based on the mapped values using stable_sort
        stable_sort(mappedNums.begin(), mappedNums.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first < b.first;
        });
        
        // Extract the sorted original numbers
        vector<int> sortedNums;
        for (const auto& p : mappedNums) {
            sortedNums.push_back(p.second);
        }
        
        return sortedNums;
    }
};

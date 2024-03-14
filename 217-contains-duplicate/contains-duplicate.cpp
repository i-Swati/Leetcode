class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        unordered_set<int> seen; // Initialize a hash set to store seen elements
        for (int i = 0; i < arr.size(); ++i) { // Iterate through the array
            int num = arr[i];
            if (seen.find(num) != seen.end()) { // If the number is already in the set
                return true; // It's a duplicate, return true
            }
            seen.insert(num); // Otherwise, add it to the set
        }
        return false; // If no duplicates found, return false
    }
};
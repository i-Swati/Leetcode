class Solution {
public:
    int longestPalindrome(string s) {
            unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    
    int length = 0;
    bool odd_found = false;
    
    for (auto it = freq.begin(); it != freq.end(); it++) {
    // Accessing the key and value separately
    char key = it->first;
    int value = it->second;

    // Check if the frequency is even or odd
    if (value % 2 == 0) {
        length += value; // Add even counts directly
    } else {
        length += value - 1; // Add the largest even part of odd counts
        odd_found = true; // Mark that we've seen at least one odd count
    }
}   
    if (odd_found) {
        length += 1;
    }
    
    return length;
    }
};
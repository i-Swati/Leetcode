class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> charCount;

        // Count characters in s
        for (char c : s) {
            charCount[c]++;
        }

        // Subtract characters in t
        for (char c : t) {
            if (charCount.find(c) == charCount.end() || charCount[c] == 0) {
                return false;  // Character not found or no more occurrences left
            }
            charCount[c]--;
        }

        return true;
    }
};

class Solution {
public:
    string smallestNumber(string pattern) {
         int n = pattern.size();
        string result = "";

        // Initialize result string with numbers 1 to n+1
        for (int i = 0; i <= n; i++) {
            result= result + (char)('1' + i);
        }

        // Reverse segments for consecutive 'D's
        for (int i = 0; i < n; ++i) {
            if (pattern[i] == 'D') {
                int start = i;
                while (i < n && pattern[i] == 'D') {
                    i++;
                }
                reverse(result.begin() + start, result.begin() + i + 1);
            }
        }

        return result;
    }
};
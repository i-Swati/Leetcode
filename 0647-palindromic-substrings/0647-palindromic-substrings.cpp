class Solution {
public:
    int dp[1001][1001];
    // Recursive helper function to expand around center and count palindromic substrings
    int expandAroundCenter(string &s, int i, int j) {
        if (i > j) {
            return 0;
        }
        
        int cnt = 0;
        while (i >= 0 && j < s.length() && s[i] == s[j]) {
            cnt++;
            if (i > 0 && j < s.length() - 1) {  // Check boundaries before decrementing/incrementing
            i--;
            j++;
            }
            else {
                break;  // Break out of the loop if boundaries are exceeded
            }
        }
        return dp[i][j]= cnt;
    }

    // Main function to count palindromic substrings
    int countSubstrings(string s) {
        
        int n = s.length();

        memset(dp, -1, sizeof(dp));

        int ans= 0;
        for (int i = 0; i < n; i++) {
            // Count odd-length palindromes centered at i
            int odd= expandAroundCenter(s, i, i);
            // Count even-length palindromes centered between i and i + 1
            int even= expandAroundCenter(s, i, i + 1);

            ans= ans + even + odd;
        }

        return ans;
    }
};
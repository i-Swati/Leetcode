class Solution {
public:
    int recursive(int ind, string& s, int n, vector<int> &dp) {
        if (ind == n) {
            return 1; // One valid split
        }

        if (s[ind] == '0') {
            return 0; // '0' cannot be decoded
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int result = recursive(ind + 1, s, n, dp);

        if (ind + 1 < n) {
            if ((s[ind] == '1') || (s[ind] == '2' && s[ind + 1] <= '6')) {
                result += recursive(ind + 2, s, n, dp);
            }
        }
        dp[ind]= result;
        return result;
    }

    int numDecodings(string s) {
        int n = s.length();
        vector<int> dp(n, -1);
        return recursive(0, s, n, dp);
    }
};
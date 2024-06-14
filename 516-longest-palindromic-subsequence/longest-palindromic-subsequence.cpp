class Solution {
public:
//moving from beginning to end
    int dp[1001][1001];
    int recursive(int i, int j, string &s){
        //base cases
        if(i>j){
            return 0;
        }
        if(i==j){
            return 1;
        }

        if(dp[i][j] != -1)  return dp[i][j];
        if(s[i]==s[j]){
            return 2 + recursive(i+1, j-1, s);
        }

        int take= recursive(i+1, j, s);
        int not_take= recursive(i, j-1, s);

        return dp[i][j] = max(take, not_take);
    }
    int longestPalindromeSubseq(string s) {
        int n= s.length();
        memset(dp, -1, sizeof(dp));
        return recursive(0, n-1, s);
    }
};
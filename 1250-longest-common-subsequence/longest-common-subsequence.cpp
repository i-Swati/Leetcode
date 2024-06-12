class Solution {
public:

    int dp[1001][1001];
    int recursive(int i, int j, string& text1, string& text2){
        //base case
        if(i<0 || j<0)  return 0;

        if(dp[i][j] != -1)  return dp[i][j];

        if(text1[i]==text2[j])  return 1 + recursive(i-1, j-1, text1, text2);

        int take_i= recursive(i-1, j, text1, text2);
        int take_j= recursive(i, j-1, text1, text2);

        return dp[i][j]= max(take_i, take_j);

    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp, -1, sizeof(dp));
        int n= text1.length();
        int m= text2.length();

        return recursive(n-1, m-1, text1, text2);
    }
};
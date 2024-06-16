class Solution {
public:
    int dp[1001][1001];
    bool check(int i, int j, string &s){
        if(i>=j)    return true;
        if(s[i]!=s[j])  return false;
        if(dp[i][j] != -1)  return dp[i][j];


        else    return dp[i][j]= check(i+1, j-1, s);
    }
    string longestPalindrome(string s) {
        int maxlen= 0;
        int n= s.length();
        int start= 0;

        memset(dp, -1, sizeof(dp));

        for(int i= 0; i<n; i++){
            for(int j= i; j<n; j++){
                if(check(i, j, s)){
                    if(j-i+1>maxlen){
                        maxlen= j-i+1;
                        start= i;
                    }
                }
            }
        }
        return s.substr(start, maxlen);        
    }
};
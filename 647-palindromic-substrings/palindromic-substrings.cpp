class Solution {
public:
    int recur(string &s, int i, int j){
        int cnt= 0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            cnt++;
            i--;
            j++;
        }
        return cnt;
    }
    int countSubstrings(string s) {
        int n= s.length();
        int ans= 0;

        for(int i=0; i<n; i++){
        //odd-length palindromes
        ans= ans + recur(s, i, i);

        //even-length palindromes
        ans= ans + recur(s, i, i+1);
        }
        return ans;
    }
};
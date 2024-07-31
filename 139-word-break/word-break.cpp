class Solution {
public:

    unordered_set<string> st; //An unordered_set named st is used to store the words from wordDict for O(1) average-time complexity lookups.
    int dp[301];

    bool solve(int idx, string &s, int n){
        if(idx>=n)  return true;//base case- reached the end of the string

        if(dp[idx]!=-1) return dp[idx];

        if(st.find(s) != st.end())  return true;


        for(int l= 1; l<=n; l++){
            string temp= s.substr(idx, l);

            if(st.find(temp) != st.end() && solve(idx + l, s, n))  return dp[idx]= true;
        }
        return dp[idx]= false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        int n= s.length();
        memset(dp, -1, sizeof(dp));
        //insert the words in set st

        for(string &word: wordDict){ //Insert all words from wordDict into the unordered_set st.
            st.insert(word);
        }

        return solve(0, s, n);
    }
};
//TC= worst case, O(n^2)
//SC= O(n), for the dp array and the unordered set
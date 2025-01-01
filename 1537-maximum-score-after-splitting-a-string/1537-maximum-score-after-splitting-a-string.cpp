class Solution {
public:
    int maxScore(string s) {
        int ans= 0;
        int n= s.length();

        for(int i= 1; i<n; i++){
            int lt_cnt= 0;
            int rt_cnt= 0;

            //lt substring
            for(int j= 0; j<i; j++){
                if(s[j]=='0')   lt_cnt++;
            }

            for(int j= i; j<n; j++){
                if(s[j]=='1')   rt_cnt++;
            }

            int score= lt_cnt + rt_cnt;
            ans= max(ans, score);
        }
        return ans;
    }
};
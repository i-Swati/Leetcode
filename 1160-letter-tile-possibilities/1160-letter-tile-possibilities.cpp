class Solution {
public:
    int recur(unordered_map<char, int>& freq, int len){
        if(len==0){
            return 1;
        }

        int cnt= 0;

        for(auto &f: freq){
            if (f.second>0){
                f.second--;
                cnt= cnt + recur(freq, len-1);

                f.second++; //backtrack
            }
        }
        return cnt;
    }
    int numTilePossibilities(string tiles) {
        unordered_map<char, int> freq;

        for(char ch:tiles){
            freq[ch]++;
        }

        int ans= 0;

        for(int i= 1; i<=tiles.size(); i++){
            ans= ans + recur(freq, i);
        }

        return ans;
    }
};
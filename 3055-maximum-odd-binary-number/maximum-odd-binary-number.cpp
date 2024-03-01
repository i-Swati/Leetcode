class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.length();
        int cnt=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        if(cnt==1){
            for(int i=0; i<n-1; i++){
                s[i]='0';
            }
        }
        else{
                // If there are more than one '1's, set bits accordingly
        for (int i = 0; i < n - 1; i++) {
            if (i < cnt - 1) {
                s[i] = '1';  // Set first cnt-1 bits to '1'
            } else {
                s[i] = '0';  // Set the rest to '0'
            }
        }
        }
        s[n-1]='1';
        return s;
    }
};
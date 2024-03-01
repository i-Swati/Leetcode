class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        int cnt = 0;

        // Count the number of '1's in the string
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt++;
            }
        }

        // Set the bits accordingly
        for (int i = 0; i < n - 1; i++) {
            s[i]='0'; //set all bits to 0 except last bit for all cases(cnt=1 or cnt>1)
            if (cnt > 1 && i < cnt - 1) {
                s[i] = '1';  // Set bits to '1' from index 0 to cnt-2
            }
        }

        // Set the last bit to '1' (in all cases since min cnt will be 1 and that should be at the end)
        s[n - 1] = '1';

        return s;
    }
};

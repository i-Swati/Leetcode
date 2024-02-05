class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        //count the frequency of each character

        for(char ch:s){
            freq[ch]++;
        }

        //iterate through the string to find first non-repeating character
        for(int i=0; i<s.length(); i++){
            if(freq[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
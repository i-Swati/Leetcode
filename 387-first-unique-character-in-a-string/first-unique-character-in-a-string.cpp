class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> frequency; //unordered map tostore the frequency of characters in string
        //count the frequency of each character in the string

        for(char ch:s){ //for a character 'ch' in the string s
            frequency[ch]++;
        }

        //iterate through the string
        for(int i=0; i<s.length(); i++){
            if(frequency[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
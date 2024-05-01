class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = -1;
        for(int i = 0; i < word.length(); i++) {
            if(word[i] == ch) {
                index = i;
                break;
            }
        }
        // If ch is not found, return original word
        if(index == -1)
            return word;
        
        // Reverse the substring from index 0 to index
        reverse(word.begin(), word.begin() + index + 1);
        return word;
    }
};

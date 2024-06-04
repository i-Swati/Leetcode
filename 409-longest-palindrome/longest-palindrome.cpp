class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;

        for (char c : s){
            freq[c]++;
        }

        int length= 0;
        bool odd_found= false;

        for(auto it= freq.begin(); it!=freq.end(); it++){
            char key= it->first;
            int value= it->second;

            if(value%2==0){
                length= length + value;
            }
            else{
                length= length + (value - 1);
                odd_found= true;
            }
        }
        if(odd_found){
            length= length + 1;
        }

        return length;
    }
};
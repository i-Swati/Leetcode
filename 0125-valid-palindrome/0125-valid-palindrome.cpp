class Solution {
public:
    bool isPalindrome(string s) {
        int low=0;
        int high=s.size()-1;

        while(low<high){
            if(!isalnum(s[low])){ //checks whether the string starting from lower index is alphanumeric
            //character or not
                low++;
                continue;
            }
            if(!isalnum(s[high])){
                high--;
                continue;
            }
            //check palindrome by matching first element with last

            if(tolower(s[low])!=tolower(s[high])){
                return false;
            }
            else{
                low++;
                high--;
            }
        }
            return true;
    }
};
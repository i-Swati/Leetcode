class Solution {
public:
//TC= O(n)
//SC= O(1) Since the space used does not grow with the input size
    bool isCircularSentence(string sentence) {
        int n= sentence.size();

        //base case
        if(sentence[0] != sentence[n-1]) return false;

        for(int i= 1; i<n-1; i++){
            if(sentence[i]== ' '){
                if(sentence[i-1] != sentence[i+1])  return false;
            }
        }
        return true;
    }
};
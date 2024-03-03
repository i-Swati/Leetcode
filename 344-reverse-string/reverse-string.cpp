class Solution {
public:
void solve(vector<char>& s, int i, int j) {
        //using recursion
        

        if(i>=j){ //base case
            return;
        }
        while(i<j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
void reverseString(vector<char>& s){
        int i=0;
        int j=s.size()-1;
        solve(s, i, j);
    }
};
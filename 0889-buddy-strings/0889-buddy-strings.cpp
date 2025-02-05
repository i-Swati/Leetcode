class Solution {
public:
    bool buddyStrings(string s, string goal) {
        vector<int> mismatch;

        if(s.length()!=goal.length()){
            return false;
        }

        
       if (s == goal) {
            unordered_map<char, int> freq;  // Hash map to store character counts
            for (char c : s) {
                freq[c]++;
                if (freq[c] > 1) return true;  // Found a duplicate character
            }
        return false;
        }

        for(int i= 0; i<s.length(); i++){
            if(s[i]!=goal[i]){
                mismatch.push_back(i);
            }
        }

        if(mismatch.size()==2){
            int i= mismatch[0];
            int j= mismatch[1];

            swap(s[i], s[j]);

            return s==goal;
        }
        return false;
    }
};
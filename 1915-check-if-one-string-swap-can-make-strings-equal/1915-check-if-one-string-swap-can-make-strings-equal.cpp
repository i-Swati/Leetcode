class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> mismatch;

        for(int i= 0; i<s1.length(); i++){
            if(s1[i]!=s2[i]){
                mismatch.push_back(i);
            }
        }

        //no mismatch
        if(mismatch.size()==0)  return true;

        //if exactly two mismatches

        if(mismatch.size()==2){
            int i= mismatch[0];
            int j= mismatch[1];

            swap(s1[i], s1[j]);

            return s1 == s2;
        }

        //for more than 2 mismatches, return false

        return false;
    }
};
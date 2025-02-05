class Solution {
public:
    bool buddyStrings(string s, string goal) {
        vector<int> mismatch;

        if(s.length()!=goal.length()){
            return false;
        }

        
        if(s==goal){
            string sorted_s= s;
            sort(sorted_s.begin(), sorted_s.end());

            for(int i= 0; i<sorted_s.length()-1; i++){
                if(sorted_s[i]==sorted_s[i+1])  return true;
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
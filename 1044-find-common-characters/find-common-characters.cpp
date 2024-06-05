class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minfreq(26, INT_MAX);

        for(const string& word: words){ //to read elements without modifying them, for (const string& word : words) is preferred for its efficiency and safety.
            vector<int> freq(26, 0);


            for(char ch: word){
                freq[ch-'a']++;
            }

            for(int i=0; i<26; i++){
                minfreq[i]= min(minfreq[i], freq[i]);
            }
        }

        //collecting the common chars to print

        vector<string> common;

        for(int i=0; i<26; i++){
            for(int j=0; j<minfreq[i]; j++){
                common.push_back(string(1, 'a' + i));
            }
        }
        return common;
    }
};
class Solution {
public:
//TC= O(m+n)
//SC= O(m+n)
    vector<string> uncommonFromSentences(string s1, string s2) {
        s1.push_back(' ');
        s2.push_back(' ');

        string temp= "";
        unordered_map<string, int> mp;
        vector<string> ans;

        for(int i= 0; i<s1.length(); i++){
            if(s1[i]!=' '){
                temp.push_back(s1[i]);
            }
            else{
                mp[temp]= mp[temp] + 1;
                temp= "";
            }
        }
        for(int i= 0; i<s2.length(); i++){
            if(s2[i]!=' '){
                temp.push_back(s2[i]);
            }
            else{
                mp[temp]= mp[temp] + 1;
                temp= "";
            }
        }
        for(auto i: mp){
            if(i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
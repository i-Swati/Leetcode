class Solution {
public:
    int maxDistinct(string s) {
        map<int, int> mp;

        for(int i= 0; i<s.length(); i++){
            mp[s[i]]++;
        }
        return mp.size();
    }
};
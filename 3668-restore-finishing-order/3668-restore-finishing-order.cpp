class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
       vector<int> ans;

       map<int, int> mp;

       for(int i= 0; i<friends.size(); i++){
        mp[friends[i]]++;
       }

       for(int j= 0; j<order.size(); j++){
        if(mp.find(order[j])!=mp.end()){
            ans.push_back(order[j]);
        }
       }
       return ans; 
    }
};
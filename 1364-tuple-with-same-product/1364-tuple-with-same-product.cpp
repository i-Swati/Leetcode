class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n= nums.size();

        unordered_map<int, int> mp;

        for(int i= 0; i<n; i++){
            for(int j= i+1; j<n; j++){
                int value= nums[i]*nums[j];
                mp[value]++;
            }
        }

        int ans= 0;

        for(auto &pair:mp){
            ans= ans+(8*(pair.second*(pair.second-1))/2);
        }
        return ans;
    }
};
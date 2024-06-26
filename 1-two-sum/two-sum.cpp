class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            int reqd= target-arr[i];

            if(mp.find(reqd)!=mp.end()){
                return {i, mp[reqd]};
            }
            mp[arr[i]]=i;
        }
        return {};
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();

        map<int, int> mp;

        for(int i=0; i<n; i++){
            int reqd=target-arr[i];
            if(mp.find(reqd)!=mp.end()){
                return {i, mp[reqd]};
            }
            mp[arr[i]]=i;
        }
        return {};
    }
};
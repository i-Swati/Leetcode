//BETTER APPPROACH
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int, int>mpp;
        for(int i=0; i<arr.size(); i++){
            int reqd=target-arr[i];

            if(mpp.find(reqd)!=mpp.end()){
                return {i, mpp[reqd]};
            }
            mpp[arr[i]]=i;
        }
        return {-1, -1};
    }
};
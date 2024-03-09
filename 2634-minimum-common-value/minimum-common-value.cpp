class Solution {
public:
    int getCommon(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> set1(arr1.begin(), arr1.end());

        int minEle=INT_MAX;

        for(int i=0; i<arr2.size(); i++){
            if(set1.count(arr2[i])){
                minEle=min(minEle, arr2[i]);
            }
        }
        if(minEle==INT_MAX){
            return -1;
        }
        else{
            return minEle;
        }
    }
};
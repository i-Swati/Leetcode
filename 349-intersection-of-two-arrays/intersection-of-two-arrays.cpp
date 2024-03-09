class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> set1(arr1.begin(), arr1.end());

        vector<int>arr;

        for(int i=0; i<arr2.size(); i++){
            if(set1.count(arr2[i])){
                arr.push_back(arr2[i]);
                set1.erase(arr2[i]);  // Remove the element from set1
            }
        }
        return arr;
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        unordered_set<int> seen;
        for(int i=0; i<arr.size(); i++){
            int num=arr[i];
            if(seen.find(num)!=seen.end()){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        //sort the array
        sort(arr.begin(), arr.end());
        for(int i=1; i<arr.size(); i++){
            if(arr[i]==arr[i-1]){
                return arr[i];
            }
        }
        return -1;
    }
};
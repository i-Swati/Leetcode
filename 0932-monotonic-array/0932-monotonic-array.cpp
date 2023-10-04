class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        int n=arr.size();
        bool increasing=true;
        bool decreasing=true;

        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                increasing=false;
            }
            else if(arr[i]<arr[i+1]){
                decreasing=false;
            }
            if(!increasing && !decreasing){ //if both increasing and decreasing becomes false
                return false;
            }
        }
        return true; //if either increasing or decreasing is still true
    }
};

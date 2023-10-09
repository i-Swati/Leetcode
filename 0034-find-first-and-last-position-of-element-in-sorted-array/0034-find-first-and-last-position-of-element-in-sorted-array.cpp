class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        //TC=O(n)+O(n)=O(2n)=O(n)
        int n=arr.size();
        vector<int>result={-1, -1};

        for(int i=0; i<n; i++){
            if(arr[i]==target){
                result[0]=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(arr[i]==target){
                result[1]=i;
                break;
            }
        }
        return result;
    }
};
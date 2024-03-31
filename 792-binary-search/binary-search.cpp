class Solution {
public:
    int search(vector<int>& arr, int target) {

        int s=0;
        int e=arr.size()-1;

        int mid=s+((e-s)/2);
        while(s<=e){
            if(arr[mid]==target)
                return mid;
        else if(arr[mid]>target){
                e=mid-1;
            }
        else{
            s=mid+1;
            }
        mid=s+((e-s))/2;
        }
    return -1;
    }
};
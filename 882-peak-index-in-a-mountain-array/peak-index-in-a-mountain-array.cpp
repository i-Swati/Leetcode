class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;

    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1; //peak element right me hoga
        }
        else{
            e=mid; //peak element left me hoga ya wahin hoga
        }
    }
        //ab start aur end same jagah point kr rhe honge
        return s;
    }
};
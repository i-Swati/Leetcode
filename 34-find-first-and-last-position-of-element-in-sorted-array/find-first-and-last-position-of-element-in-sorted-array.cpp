class Solution {
public:

int firstOcc(vector<int> &arr, int key){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int first=-1;
    while(s<=e){
    if(arr[mid]==key){
        //left me jao
        first=mid;
        e=mid-1;
    }

    else if(arr[mid]>key){
        //left me jao
        e=mid-1;
    }

    else if(arr[mid]<key){
        //right me jao
        s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return first;
}

int lastOcc(vector<int>&arr, int key){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    int last=-1;

    while(s<=e){
        if(arr[mid]==key){
            last=mid;
            s=mid+1;
        }

        else if(arr[mid]>key){
            //left me jao
            e=mid-1;
        }

        else if(arr[mid]<key){
            //right me jao
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return last;
}
    vector<int> searchRange(vector<int>& arr, int key) {
        vector<int> ans;
        int first=firstOcc(arr, key);
        int last=lastOcc(arr, key);

        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};
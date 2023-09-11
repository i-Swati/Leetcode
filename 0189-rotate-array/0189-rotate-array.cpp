/*class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n; // Calculate the effective rotation value
        
        // Reverse the entire array
        reverse(arr.begin(), arr.end());
        
        // Reverse the first part
        reverse(arr.begin(), arr.begin() + d);
        
        // Reverse the second part
        reverse(arr.begin() + d, arr.end());
    }
};*/
class Solution{
    public:
    void reverse(vector<int>&arr, int low, int high){
        while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;

        low++;
        high--;
        }
    }

    void rotate(vector<int>&arr, int d){
        int n=arr.size();
        d=d%n;

        reverse(arr, 0, n-1);
        reverse(arr, 0, d-1);
        reverse(arr, d, n-1);
        
    }
};
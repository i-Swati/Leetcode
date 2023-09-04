class Solution {
public:
    void rotate(vector<int>& arr, int d) {
    int n=arr.size();

    vector<int>temp(n);
    for(int i=0; i<n; i++){
        temp[(i+d)%n]=arr[i];
    }
    arr=temp;
    }
};
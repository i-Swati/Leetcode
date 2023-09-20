class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int sum=(n*(n+1)/2);
        int s2=0;
        for(int i=0; i<=n-1; i++){
            s2=s2+arr[i];
        }
        return sum-s2;

    }
};
class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int> arr(82, 0); // maximum sum could be 9+9+9+9+9+9+9+9+9= 81
        int ans = -1;
        for (int x : nums) {
            int sum = 0, temp = x;
                while (temp != 0) {
                    sum= sum+temp % 10;
                    temp/= 10;
                }
            if (arr[sum]!=0) ans = max(ans, x + arr[sum]);
            arr[sum] = max(arr[sum], x);
            }
        return ans;
    }
};
class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int XOR1 = 0;
        for (int i = 0; i <= n; i++) {
            XOR1 = XOR1 ^ i;
        }
        //instead of a traditional for loop, it is a range-based loop used to iterate through 
        //the elemnts of the arr vector directly 
        int XOR2 = 0;
        for (int num : arr) {
            XOR2 = XOR2 ^ num;
        }

        return XOR1 ^ XOR2;
    }
};
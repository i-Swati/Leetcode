class Solution {
public:
    bool isPowerOfFour(int n) {
        // Base case
        if (n == 1) {
            return true;
        }
        
        // Recursive case
        if (n <= 0 || n % 4 != 0) {
            // If n is not positive or not divisible by 4, it's not a power of four
            return false;
        } else {
            // Recursive call with reduced value of n
            return isPowerOfFour(n / 4);
        }
    }
};

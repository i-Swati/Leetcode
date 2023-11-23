class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0; // Base case: fib(0) = 0
        if (n == 1) return 1; // Base case: fib(1) = 1

        int f0 = 0;
        int f1 = 1;
        int sum = 0; // Initialize sum with 0

        for (int i = 2; i <= n; i++) {
            sum= f0 + f1;
            f0 = f1;
            f1 = sum;
        }

        return sum;
    }
};

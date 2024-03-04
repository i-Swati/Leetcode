class Solution {
public:
    int mod = 1337;

    int pow(int a, int b) {
        a %= mod;
        int result = 1;
        for (int i = 0; i < b; ++i) {
            result = (result * a) % mod;
        }
        return result;
    }

    int superPow(int a, vector<int>& b) {
        if (b.empty()) return 1;

        int last_digit = b.back();
        b.pop_back();

        int part1 = pow(a, last_digit);
        int part2 = pow(superPow(a, b), 10);

        return (part1 * part2) % mod;
    }
};

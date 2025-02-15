class Solution {
public:

bool canPartition(string s, int target, int start) {
    if (start == s.size()) {
        return target == 0;
    }
    for (int len = 1; len <= s.size() - start; ++len) {
        int num = stoi(s.substr(start, len));
        if (num <= target && canPartition(s, target - num, start + len)) {
            return true;
        }
    }
    return false;
}
    int punishmentNumber(int n) {
        int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int square = i * i;
        if (canPartition(to_string(square), i, 0)) {
            sum += square;
        }
    }
    return sum;
    }
};
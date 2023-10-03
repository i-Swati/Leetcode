class Solution {
public:
    int sumFourDivisors(vector<int>& arr) {
        int sum = 0;

        for (int num : arr) {
            int cnt = 0;
            int divsum = 0;

            for (int i = 1; i * i <= num && cnt <= 4; i++) {
                if (num % i == 0) {
                    cnt++;
                    divsum += i;

                    if (i != num / i) {
                        cnt++;
                        divsum += num / i;
                    }
                }
            }

            if (cnt == 4) {
                sum += divsum;
            }
        }

        return sum;
    }
};

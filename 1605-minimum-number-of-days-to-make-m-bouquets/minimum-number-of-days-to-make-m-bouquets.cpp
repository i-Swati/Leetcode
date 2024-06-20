class Solution {
public:
    int check(vector<int>& bloomDay, int k, int mid) {
        int flower = 0;
        int bouq = 0;

        for (int i = 0; i < bloomDay.size(); i++) {
            if(bloomDay[i]<=mid){
                flower++;
            }
            else{
                flower= 0;
            }
            if(flower==k){
                bouq++;
                flower= 0;
            }
        }

        return bouq;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        // Use long long to avoid overflow
        if ((long long)n < (long long)m * k) {
            return -1; // Not enough flowers to form the required bouquets
        }

        int minDay = *min_element(bloomDay.begin(), bloomDay.end());
        int maxDay = *max_element(bloomDay.begin(), bloomDay.end());

        int result = -1;

        while (minDay <= maxDay) {
            int mid = minDay + (maxDay - minDay) / 2;

            if (check(bloomDay, k, mid)>=m) {
                result = mid;
                maxDay = mid - 1; // try for smaller days to minimize the days
            } else {
                minDay = mid + 1; // try for larger days
            }
        }
        return result;
    }
};

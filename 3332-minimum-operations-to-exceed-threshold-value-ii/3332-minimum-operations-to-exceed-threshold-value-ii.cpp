class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());
        int operations = 0;

        while (pq.size() > 1 && pq.top() < k) {
            long long x = pq.top(); pq.pop();
            long long y = pq.top(); pq.pop();
            long long newElement = 2LL * min(x, y) + max(x, y);
            pq.push(newElement);
            operations++;
        }

        return operations;
    }
};
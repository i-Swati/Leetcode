class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                cnt++;
            }
        }

    //If there is more than one break, the array can't be sorted by rotation
        return cnt <= 1;
    }
};
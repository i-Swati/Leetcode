class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
        int cnt=0;
        //prev= nums[i-1];
        //curr= nums[i];

        for(int i= 1; i<n; i++){
            if(nums[i-1]>=nums[i]){
                cnt= cnt + abs(nums[i]-nums[i-1]) + 1;
                nums[i]= nums[i-1] + 1;
            }
        }
        return cnt;
    }
};
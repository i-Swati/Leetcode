class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum= 0;
        int sum= nums[0];

        for(int i= 0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                sum= sum + nums[i+1];
            }
            else{
                maxSum= max(sum, maxSum);
                sum= nums[i+1];
            }
        }
        return max(maxSum, sum);
    }
};
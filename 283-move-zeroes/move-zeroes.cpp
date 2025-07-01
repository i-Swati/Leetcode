class Solution {
public:
    void moveZeroes(vector<int>& nums) {
                int n= nums.size();
        vector<int> ans(n, 0);
        int index= 0;

        for(int i= 0; i<n; i++){
            if(nums[i]!=0){
                ans[index]= nums[i];
                index++;
            }
        }

        for(int i= 0; i<n; i++){
            nums[i]= ans[i];
        }
    }
};
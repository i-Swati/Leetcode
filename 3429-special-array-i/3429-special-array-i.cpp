class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        //TC= O(n); SC= O(1)
        int n= nums.size();
        bool ans= true;
        for(int i= 0; i<n-1; i++){
            if(nums[i]%2!=nums[i+1]%2){
                ans= true;
            }
            else{
                return false;
            }
        }
        return ans;
    }
};
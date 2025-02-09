class Solution {
public:
    int reverse(int x) {
    
        int ans=0;

        while(x!=0){
            int digit=x%10;

            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
                return 0;
            }
            ans=(ans*10)+digit;

            x=x/10;

        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        //nums[i]-reverse(nums[i])= nums[j]-reverse(nums[j])-->nice pair

        unordered_map<int, int> mp;
        int nicePair= 0;

        for(int i= 0; i<nums.size(); i++){
            int val= nums[i];
            int reverseVal= reverse(nums[i]);
            int key= val-reverseVal;

            if(mp.find(key)!=mp.end()){
                nicePair= (nicePair + mp[key]) % (1000000007);
            }

            mp[key]++;
        }
        return nicePair;
    }
};
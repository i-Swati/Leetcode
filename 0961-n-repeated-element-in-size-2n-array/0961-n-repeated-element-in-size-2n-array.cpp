class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        //{6 8 2 5 1 2 8 8}-->[(6,1)(8, 3)(2, 2)(5, 1)(1,1)]

        map<int, int> mp;

        for(int i= 0; i<nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==2)  return nums[i];
        }
        return 0;
    }
};
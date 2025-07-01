class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        int index= 0;

        for(int i= 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto it: mp){
            nums[index]= it.first;
            index++;
        }
        
        return mp.size();
    }
};
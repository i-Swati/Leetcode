class Solution {
public:
//counting sort
//TC= O(n+k); array size and range of elements
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int &num:nums){
            mp[num]++;
        }

        int minEle= *min_element(nums.begin(), nums.end());
        int maxEle= *max_element(nums.begin(), nums.end());

        int i= 0;

        for(int num= minEle; num<=maxEle; num++){
            while(mp[num]>0){
                nums[i]= num;
                i++;
                mp[num]--;
            }
        }
        return nums;
    }
};
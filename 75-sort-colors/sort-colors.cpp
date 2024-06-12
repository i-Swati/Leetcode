class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt1=0, cnt2=0, cnt3=0;
        
        int n= nums.size();

        for(int i= 0; i<n; i++){
            if(nums[i]==0)  cnt1++;
            
            if(nums[i]==1)  cnt2++;

            if(nums[i]==2)  cnt3++;
        }

        for(int i= 0; i<cnt1; i++)  nums[i]=0;
        for(int i= cnt1; i<(cnt1+cnt2); i++)    nums[i]=1;
        for(int i= (cnt1+cnt2); i<n; i++) nums[i]=2;
    }
};
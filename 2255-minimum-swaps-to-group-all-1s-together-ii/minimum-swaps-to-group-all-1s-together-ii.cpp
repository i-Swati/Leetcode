class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n= nums.size();

        vector<int> temp(2*n);

        for(int i= 0; i<2*n; i++){
            temp[i]= nums[i%n]; //{1, 0}-->{1, 0, 1, 0}
        }

        int totalOnes= accumulate(nums.begin(), nums.end(), 0);  //window size containing all 1s we need

        //sliding window template

        int i= 0;
        int j= 0;

        int currOnes= 0;
        int maxCnt= 0; //max number of times, we found 1 in window

        while(j<2*n){
            if(temp[j]==1){
                currOnes++;
            }

            if(j-i+1 > totalOnes){
                currOnes= currOnes - temp[i];
                i++;
            }
            maxCnt= max(maxCnt, currOnes);
            j++;
        }
        return totalOnes - maxCnt;
    }
};

//SC= O(2*n)
//TC= O(2*n)~O(n)
class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int posCnt=0;
        int negCnt=0;

        for(int i=0; i<arr.size(); i++){
            if(arr[i]>0){
                posCnt++;
            }
            else if(arr[i]<0){
                negCnt++;
            }
        }
        return max(posCnt, negCnt);
    }
};
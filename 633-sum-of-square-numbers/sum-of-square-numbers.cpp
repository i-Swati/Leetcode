class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i= 0;
        long long j= sqrt(c);

        while(i<=j){
            long long sum= i*i + j*j;
            if(sum==c){
                return true;
            }
            else if(sum<c){
                i++;
            }
            else if(sum>c){
                j--;
            }
        }
        return false;
    }
};
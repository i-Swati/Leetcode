class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            if(n&1){ //check if last bit is 1; using AND operation
            count++;
            }
            n=n>>1; //right shift
        }
        return count;
    }
};
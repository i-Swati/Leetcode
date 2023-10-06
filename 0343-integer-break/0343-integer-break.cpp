class Solution {
public:
    int integerBreak(int n) {
        while(n<=3){
            return n-1;
        }
        int product=1;
        while(n>4){
            product=product*3;
            n=n-3;
        }
        product=product*n;
        return product;
    }
};

//TC=O(log n)
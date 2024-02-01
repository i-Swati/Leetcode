class Solution {
public:
    double myPow(double x, int n) {

        // Handle the case of INT_MIN
        if (n == INT_MIN) {
            x = x * x;
            n = n / 2;
        }
        
        //base case
        if(n==0){
            return 1.0;
        } //ruk jao

        //handle negative exponent
        if(n<0){ //negative number
            x=1/x;
            n=-n; //eg.- 2^-3=(1/2)^3=(1/2)^(n-2n)=(1/2)^(-n)
        }

        //R.R
        //handle all other positives
        
        if (n % 2 == 0) { //halved to reduce TC
            double halfPow = myPow(x, n / 2);
            return halfPow * halfPow;
            } 
        else {
            return x * myPow(x, n-1);
            }
    }
};
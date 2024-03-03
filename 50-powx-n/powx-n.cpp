class Solution {
public:
    double myPow(double x, int n) {

        // Handle the case of INT_MIN: Handling INT_MIN separately helps 
        //prevent integer overflow and ensures correct 
        //calculations for extreme cases.
        
        if (n == INT_MIN) {
            x = x * x;
            n = n / 2;
        }

        //base case
         if(n==0){
             return 1.0;
         }
         if(n==1){
             return x;
         }

        //handle negative exponent
        if(n<0){ //negative number
            x=1/x;
            n=-n; //eg.- 2^-3=(1/2)^3=(1/2)^(n-2n)=(1/2)^(-n)

        }

        //if n is even
        
        if(n%2==0){
            //recursive call
            double ans= myPow(x, n/2);
            return ans*ans;
        }

        //if n is odd
        else{
            return x*myPow(x, n-1);
        }
    }
};
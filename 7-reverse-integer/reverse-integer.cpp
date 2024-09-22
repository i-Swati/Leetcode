class Solution {
public:
    int reverse(int x) {
        
        int revNum= 0;//x= 123

        while(x!=0){        
        int last_dig= x%10; //123 % 10= 3

        // Check for overflow before updating revNum
        if (revNum > INT_MAX / 10 || (revNum < INT_MIN/10)){
            return 0; // Return 0 if it would overflow
        }

        revNum= (revNum*10) + last_dig; //revNum= 3

        x= x/10;
        }            
        return revNum;      
    }
};
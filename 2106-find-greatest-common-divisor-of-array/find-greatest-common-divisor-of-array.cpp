class Solution {
public:
//TC= O(n) + O(mn)
    int findGCD(vector<int>& nums) {
        int mn= INT_MAX;
        int mx= INT_MIN;

       for(int num: nums){
        mn= min(mn, num);
        mx= max(mx, num);
       }

       int gcd= 1;
       for(int i= mn; i>=1; i--){
        if(mn%i==0 && mx%i==0){
            gcd=i;
            break;
        }
       }
       return gcd; 
    }
};
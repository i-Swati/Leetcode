class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans= 0;
        for(int i= 1; i<=n; i++){
            if(n%2==0){
                ans= n;
            }
            else{
                ans= n*2;
            }
        }
        return ans;
    }
};
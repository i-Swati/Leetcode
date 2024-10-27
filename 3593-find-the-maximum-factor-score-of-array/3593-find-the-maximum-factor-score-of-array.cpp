class Solution {
public:
long long lcm(long long a, long long b){
    long long lc= (long long)(a*b) / __gcd(a, b);
    return lc;
}
    long long maxScore(vector<int>& nums) {
        long long whcf= 0;
        long long wlcm= 1;

        long long n= nums.size();

        for(int i= 0; i<n; i++){
            whcf= __gcd(whcf, (long long) nums[i]);
            wlcm= lcm(wlcm, (long long)nums[i]);
        }

        long long ans= (long long)whcf * wlcm;
        for(int i= 0; i<n; i++){

            //kon sa element delete krna haiiii
            long long shcf=0;
            long long slcm=1;

            for(int j=0; j<i; j++)
            {
                shcf=__gcd(shcf, (long long)nums[j]);
                slcm=lcm(slcm, (long long)nums[j]);
            }
            for(int j=i+1; j<n; j++)
            {
                shcf=__gcd(shcf,(long long)nums[j]);
                slcm=lcm( slcm ,(long long) nums[j] );
            }
            ans=(long long)max( ans, (long long)shcf*slcm );
        }
        return ans;
    }
};
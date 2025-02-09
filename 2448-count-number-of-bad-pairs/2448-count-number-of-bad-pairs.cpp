class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        //Optimal approach

        //bad pairs= total pairs - good pairs
        //tp= n(n-1)/2
        //gp--> j-i==nums[j]-nums[i] //j-nums[j]==i-nums[i]

        long long n= nums.size();

        unordered_map<int, int> mp;
        long long gp= 0;
        for(int i= 0; i<n; i++){
            int val= nums[i]-i;
            if(mp.find(val)!=mp.end()){
                gp= gp + mp[val];
            }
            mp[val]++;
        }
        long long tp= (n*(n-1))/2;
        return tp - gp; //bp
    }
};
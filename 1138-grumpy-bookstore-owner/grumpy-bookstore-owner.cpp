class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n= customers.size();
        int i= 0; int j= minutes;

        int curr_uns= 0;

        for(int i= 0; i<minutes; i++){
            if(grumpy[i]==1)    curr_uns+= customers[i]; 
        }

        int max_uns= curr_uns;

        while(j<n){
            if(grumpy[j]==1)    curr_uns= curr_uns + customers[j];
            if(grumpy[i]==1)    curr_uns= curr_uns - customers[i];
            
            max_uns= max(curr_uns, max_uns);

            i++;
            j++;
        }

        int ans= max_uns;

        for(int i= 0; i<n; i++){
            if(grumpy[i]==0) ans= ans + customers[i];
        }

        return ans;
    }
};
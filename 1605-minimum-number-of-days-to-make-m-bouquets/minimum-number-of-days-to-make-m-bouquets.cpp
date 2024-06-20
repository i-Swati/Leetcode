class Solution {
public:
    int check(vector<int> &bloomDay, int k, int mid){
        int bouq= 0;
        int consec_cnt= 0;

        for(int i= 0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=mid){
                consec_cnt++;
            }
            else{
                consec_cnt= 0;
            }

            if(consec_cnt==k){
                bouq++;
                consec_cnt= 0;
            }
        }
        return bouq;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();
        
        int start_day=0;
        int end_day= *max_element(begin(bloomDay), end(bloomDay));

        int minDay= -1;

        //binary search
        while(start_day<=end_day){
            int mid= start_day + (end_day-start_day)/2;

            if(check(bloomDay, k, mid)>=m){
                minDay= mid;
                end_day= mid-1;
            }
            else{
                start_day= mid + 1;
            }
        }
        return minDay;
    }
};
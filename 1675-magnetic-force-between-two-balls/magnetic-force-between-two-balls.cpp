class Solution {
public:
    int check(vector<int> &position, int force, int m){
        int first= position[0];
        int cntBalls= 1; //first ball at position 0, counted 1

        for(int i= 1; i<position.size(); i++){
            int curr= position[i];

            if(curr - first >= force){
                cntBalls++;
                first= curr; //to see where to place next ball, curr ball is treated as first ball
            }
            if(cntBalls== m)    break;
        }
        return cntBalls==m;
    }

    int maxDistance(vector<int>& position, int m) {
        int n= position.size();
        sort(position.begin(), position.end());

        int minF= 1;
        int maxF= position[n-1] - position[0];

        int result= -1;

        while(minF <= maxF){
            int mid = minF + (maxF-minF)/2;

            if(check(position, mid, m)){
                result= mid;
                minF= mid + 1;
            }
            else{
                maxF= mid - 1;
            }
        }
        return result;
    }
};
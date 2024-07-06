class Solution {
public:
    int passThePillow(int n, int time) {
        int rounds= time/(n-1);
        int time_left= time%(n-1);

        if(rounds%2!= 0){
            return n-time_left;
        }

        else{
            return time_left+1;
        }
    }
};
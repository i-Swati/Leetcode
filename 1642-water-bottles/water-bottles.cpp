class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int full= numBottles;
        int rem= 0;
        int tot= numBottles;

        while (numBottles>=numExchange){
            full = numBottles/numExchange;
            rem = numBottles%numExchange;
            numBottles= full + rem;
            tot= tot + full;
        }
        return tot;
    }
};
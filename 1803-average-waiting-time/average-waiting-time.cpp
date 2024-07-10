class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n= customers.size();
        
        int currTime= 0;
        double totWaitTime= 0;

        for(auto &vec : customers){
            int arrivalTime= vec[0];
            int cookTime= vec[1];

            if(arrivalTime>currTime){
                currTime = arrivalTime;
            }
            int waitTime= currTime + cookTime - arrivalTime;
            totWaitTime += waitTime;
            currTime += cookTime; 
        }
        return totWaitTime/n;
    }
};
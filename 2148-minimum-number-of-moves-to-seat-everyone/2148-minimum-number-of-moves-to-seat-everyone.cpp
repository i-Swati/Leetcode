class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        //sort
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int sum= 0;
        int diff= 0;

        for(int i=0; i<seats.size(); i++){
            diff= abs(seats[i]-students[i]);
            sum= sum+diff;
        }
        return sum;
    }
};
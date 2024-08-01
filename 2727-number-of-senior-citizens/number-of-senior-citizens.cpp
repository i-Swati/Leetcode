class Solution {
public:
     int countSeniors(vector<string>& details) {
        int cnt = 0;
        for (const string& detail : details) {
            // Extract the age part from the detail string
            int age = stoi(detail.substr(11, 2));
            // Check if the age is strictly more than 60
            if (age > 60) {
                cnt++;
            }
        }
        return cnt;
    }
};
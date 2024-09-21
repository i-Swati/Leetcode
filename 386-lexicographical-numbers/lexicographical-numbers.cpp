class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> nums;

        //convert each number to string and store it in nums vector
        for(int i= 1; i<=n; i++){
            nums.push_back(to_string(i));
        }

        //sort
        sort(nums.begin(), nums.end());

        vector<int> result;
        for(const string &s: nums){
            result.push_back(stoi(s));
        }
        return result;
    }
};
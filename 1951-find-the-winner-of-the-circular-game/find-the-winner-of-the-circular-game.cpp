class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> arr;
        
        for (int i = 1; i <= n; ++i) {
            arr.push_back(i);
        }
        
        int start = 0;
        
        while (arr.size() > 1) {
            int to_remove = (start + k - 1) % arr.size();

            arr.erase(arr.begin() + to_remove);
            
            //update starting index
            start = to_remove % arr.size();
        }
        
        // Return the last remaining friend
        return arr[0];
    }
};
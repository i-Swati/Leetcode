class Solution {
public:
    int findDuplicate(std::vector<int>& arr) {
        vector<int> visited(arr.size(), 0);

        for (int i=0; i<arr.size(); i++) {
            if (visited[arr[i]] == 1) {
                return arr[i];
            }
            visited[arr[i]]++;
        }

        return -1; // No duplicate found
    }
};
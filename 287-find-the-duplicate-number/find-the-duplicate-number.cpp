//BETTER
class Solution {
public:
    int findDuplicate(std::vector<int>& arr) {
        vector<int> visited(arr.size(), 0);

        for (int i:arr) {
            if (visited[i] == 1) {
                return i;
            }
            visited[i]++;
        }

        return -1; // No duplicate found
    }
};

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;

        vector<int> rowMin(m, INT_MAX);
        vector<int> colMax(n, INT_MIN);

        //Find the minimum elements in each row
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                rowMin[row] = min(rowMin[row], matrix[row][col]);
            }
        }

        //Find the maximum elements in each column
        for (int col = 0; col < n; col++) {
            for (int row = 0; row < m; row++) {
                colMax[col] = max(colMax[col], matrix[row][col]);
            }
        }

        //lucky numbers
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (matrix[row][col] == rowMin[row] && matrix[row][col] == colMax[col]) {
                    result.push_back(matrix[row][col]);
                }
            }
        }

        return result;
    }
};
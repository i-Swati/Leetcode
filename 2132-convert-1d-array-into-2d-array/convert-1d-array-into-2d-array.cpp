class Solution {
public:
//TC- O(k) //we iterate the entire original array once
//SC- O(m*n) //we create a 2D vector of size m*n to store all the elements of the original array. apart from this we do not use any additional space
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int k= original.size();
        if(k!=(m*n))    return {}; //base case
        //create a 2D array
        vector<vector<int>> ans(m, vector<int>(n));

        //fill the 2D with elements of the original array
        for(int i= 0; i<k; i++){
            ans[i/n][i%n]= original[i];
        }

        return ans;
    }
};